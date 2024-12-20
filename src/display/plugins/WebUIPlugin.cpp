#include "WebUIPlugin.h"
#include "../core/Controller.h"
#include "../ui/ui.h"
#include <ArduinoJson.h>
#include <AsyncJson.h>
#include <SPIFFS.h>

WebUIPlugin::WebUIPlugin() : server(80) {}

void WebUIPlugin::setup(Controller *_controller, PluginManager *_pluginManager) {
    this->controller = _controller;
    this->pluginManager = _pluginManager;
    this->ota = new GitHubOTA(
        BUILD_GIT_VERSION,
        RELEASE_URL + controller->getSettings().getOTAChannel(),
        [this](uint8_t phase) { pluginManager->trigger("ota:update:phase", "phase", phase); },
        [this](int progress) { pluginManager->trigger("ota:update:progress", "progress", progress); },
        "display-firmware.bin",
        "display-filesystem.bin"
        );
    pluginManager->on("controller:wifi:connect", [this](Event const &) { start(); });
}
void WebUIPlugin::loop() {
    if (updating) {
        pluginManager->trigger("ota:update:start");
        ota->update();
        pluginManager->trigger("ota:update:end");
        updating = false;
    }
    const long now = millis();
    if (lastUpdateCheck == 0 || now > lastUpdateCheck + UPDATE_CHECK_INTERVAL) {
        ota->checkForUpdates();
        if (ota->isUpdateAvailable()) {
            lv_obj_clear_flag(ui_StandbyScreen_updateIcon, LV_OBJ_FLAG_HIDDEN);
        }
        lastUpdateCheck = now;
    }
}

void WebUIPlugin::start() {
    server.on("/api/ota", [this](AsyncWebServerRequest *request) { handleOTA(request); });
    server.on("/api/settings", [this](AsyncWebServerRequest *request) { handleSettings(request); });
    server.on("/api/status", [this](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        JsonDocument doc;
        doc["mode"] = controller->getMode();
        doc["tt"] = controller->getTargetTemp();
        doc["ct"] = controller->getCurrentTemp();
        serializeJson(doc, *response);
        request->send(response);
    });
    server.serveStatic("/", SPIFFS, "/").setDefaultFile("index.html");
    server.begin();
    Serial.print("OTA server started");
}

void WebUIPlugin::handleOTA(AsyncWebServerRequest *request) {

    if (request->method() == HTTP_POST) {
        if (request->hasArg("channel")) {
            controller->getSettings().setOTAChannel(request->arg("channel") == "latest" ? "latest" : "nightly");
            ota->setReleaseUrl(RELEASE_URL + controller->getSettings().getOTAChannel());
            ota->checkForUpdates();
        }
        if (request->hasArg("update")) {
            updating = true;
        }
    }

    AsyncResponseStream *response = request->beginResponseStream("application/json");
    JsonDocument doc;
    Settings const &settings = controller->getSettings();
    doc["updateAvailable"] = ota->isUpdateAvailable();
    doc["currentVersion"] = BUILD_GIT_VERSION;
    doc["latestVersion"] = ota->getCurrentVersion();
    doc["channel"] = settings.getOTAChannel();
    doc["updating"] = updating;
    serializeJson(doc, *response);
    request->send(response);
}

void WebUIPlugin::handleSettings(AsyncWebServerRequest *request) {
    if (request->method() == HTTP_POST) {
        controller->getSettings().batchUpdate([request](Settings *settings) {
            if (request->hasArg("startupMode"))
                settings->setStartupMode(request->arg("startupMode") == "brew" ? MODE_BREW : MODE_STANDBY);
            if (request->hasArg("targetBrewTemp"))
                settings->setTargetBrewTemp(request->arg("targetBrewTemp").toInt());
            if (request->hasArg("targetSteamTemp"))
                settings->setTargetSteamTemp(request->arg("targetSteamTemp").toInt());
            if (request->hasArg("targetWaterTemp"))
                settings->setTargetWaterTemp(request->arg("targetWaterTemp").toInt());
            if (request->hasArg("targetDuration"))
                settings->setTargetDuration(request->arg("targetDuration").toInt() * 1000);
            if (request->hasArg("temperatureOffset"))
                settings->setTemperatureOffset(request->arg("temperatureOffset").toInt());
            if (request->hasArg("pid"))
                settings->setPid(request->arg("pid"));
            if (request->hasArg("wifiSsid"))
                settings->setWifiSsid(request->arg("wifiSsid"));
            if (request->hasArg("mdnsName"))
                settings->setMdnsName(request->arg("mdnsName"));
            if (request->hasArg("wifiPassword"))
                settings->setWifiPassword(request->arg("wifiPassword"));
            settings->setHomekit(request->hasArg("homekit"));
        });
        controller->setTargetTemp(controller->getTargetTemp());
    }

    AsyncResponseStream *response = request->beginResponseStream("application/json");
    JsonDocument doc;
    Settings const &settings = controller->getSettings();
    doc["startupMode"] = settings.getStartupMode();
    doc["targetBrewTemp"] = settings.getTargetBrewTemp();
    doc["targetSteamTemp"] = settings.getTargetSteamTemp();
    doc["targetWaterTemp"] = settings.getTargetWaterTemp();
    doc["targetDuration"] = settings.getTargetDuration() / 1000;
    doc["homekit"] = settings.isHomekit();
    doc["pid"] = settings.getPid();
    doc["wifiSsid"] = settings.getWifiSsid();
    doc["wifiPassword"] = settings.getWifiPassword();
    doc["mdnsName"] = settings.getMdnsName();
    doc["temperatureOffset"] = String(settings.getTemperatureOffset());
    serializeJson(doc, *response);
    request->send(response);

    if (request->method() == HTTP_POST && request->hasArg("restart"))
        ESP.restart();
}
