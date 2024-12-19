#ifndef WEBUIPLUGIN_H
#define WEBUIPLUGIN_H

#define ELEGANTOTA_USE_ASYNC_WEBSERVER 1

#include "../core/Plugin.h"
#include <ESPAsyncWebServer.h>
#include "GitHubOTA.h"

constexpr size_t UPDATE_CHECK_INTERVAL = 5 * 60 * 1000;

const String RELEASE_URL = "https://github.com/jniebuhr/gaggimate/releases/";

class WebUIPlugin : public Plugin {
  public:
    WebUIPlugin();
    void setup(Controller *controller, PluginManager *pluginManager) override;
    void loop() override;
  private:
    void start();
    String processTemplate(const String& var);
    String processOTATemplate(const String& var);

    void handleOTA(AsyncWebServerRequest *request);
    void handleSettings(AsyncWebServerRequest *request);

    GitHubOTA ota = GitHubOTA(BUILD_GIT_VERSION, RELEASE_URL + "latest", "display-firmware.bin", "display-filesystem.bin");
    AsyncWebServer server;
    Controller *controller = nullptr;
    PluginManager *pluginManager = nullptr;

    long lastUpdateCheck = 0;
    bool updating = false;
};

#endif // WEBUIPLUGIN_H
