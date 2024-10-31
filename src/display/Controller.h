//
// Created by Jochen Ullrich on 26.10.24.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "LV_Helper.h"
#include "LilyGo_RGBPanel.h"
#include "NimBLEClientController.h"
#include "config.h"
#include "html.h"
#include "time.h"
#include "ui/ui.h"
#include <ESPmDNS.h>
#include <ElegantOTA.h>
#include <WebServer.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <Preferences.h>
#include "TemplateTango.h"

#ifdef HOMEKIT_ENABLED
#include "homekit.h"
#endif

#define PING_INTERVAL                   1000
#define PROGRESS_INTERVAL                250
#define HOT_WATER_SAFETY_DURATION_MS   30000
#define STEAM_SAFETY_DURATION_MS       60000
#define BREW_MIN_DURATION_MS            5000
#define BREW_MAX_DURATION_MS          120000
#define STANDBY_TIMEOUT_MS            900000
#define MIN_TEMP                           0
#define MAX_TEMP                         160
#define DEFAULT_TEMPERATURE_OFFSET         0
#define DEFAULT_PID             "4.5,128,32"

#define MODE_STANDBY 0
#define MODE_BREW    1
#define MODE_STEAM   2
#define MODE_WATER   3

#define MDNS_NAME "gaggia"
#define WIFI_SSID "GaggiMate"
#define WIFI_CONNECT_ATTEMPTS 10
#define NTP_SERVER "pool.ntp.org"

class Controller {
public:
    Controller();

    // Base methods called from sketch
    void setup();
    void connect();
    void loop();  // Called in loop, encapsulating most of the functionality

    // Getters and setters
    int getMode();
    void setMode(int newMode);
    int getTargetTemp();
    void setTargetTemp(int temperature);
    int getTargetDuration();
    void setTargetDuration(int duration);
    bool isActive() const;
    bool isUpdating() const;

    // Event callback methods
    void updateLastAction();
    void raiseTemp();
    void lowerTemp();
    void activate();
    void deactivate();
    void activateStandby();

private:
    // Initialization methods
    void setupPanel();
    void setupWifi();
    void setupBluetooth();
    void setupHomekit();

    // Functional methods
    void updateRelay();
    void updateUiActive();
    void updateUiSettings();
    void updateUiCurrentTemp();
    void updateBrewProgress();
    void updateStandby();
    void savePreferences();

    // Event handlers
    void onOTAUpdate();
    void onTempRead(float temperature);

    // Private Attributes
    WebServer server;
    LilyGo_RGBPanel panel;
    NimBLEClientController clientController;
    hw_timer_t* timer;
    #ifdef HOMEKIT_ENABLED
    HomekitController homekitController;
    #endif
    Preferences preferences;

    int mode;
    int targetBrewTemp;
    int targetSteamTemp;
    int targetWaterTemp;
    int temperatureOffset;
    int targetDuration;
    int currentTemp;
    int startupMode;
    String pid;
    String wifiSsid;
    String wifiPassword;

    unsigned long activeUntil;
    unsigned long lastPing;
    unsigned long lastProgress;
    unsigned long lastAction;
    bool loaded;
    bool updating;

};



#endif //CONTROLLER_H
