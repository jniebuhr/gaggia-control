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

#define PING_INTERVAL                   1000
#define PROGRESS_INTERVAL                250
#define HOT_WATER_SAFETY_DURATION_MS   30000
#define STEAM_SAFETY_DURATION_MS       60000
#define BREW_MIN_DURATION_MS            5000
#define BREW_MAX_DURATION_MS          120000
#define STANDBY_TIMEOUT_MS            900000
#define MIN_TEMP                           0
#define MAX_TEMP                         160

#define MODE_STANDBY 0
#define MODE_BREW    1
#define MODE_STEAM   2
#define MODE_WATER   3

#define MDNS_NAME "gaggia"
#define NTP_SERVER "pool.ntp.org"

class Controller {
public:
    Controller();
    void setup();
    void connect();
    void loop();  // Called in loop, encapsulating most of the functionality
    bool isUpdating() const;

    int getMode();
    void setMode(int newMode);
    int getTargetTemp();
    void setTargetTemp(int temperature);
    int getTargetDuration();
    void setTargetDuration(int duration);
    void raiseTemp();
    void lowerTemp();
    void updateLastAction();

    bool isActive() const;
    void activate(unsigned long until);
    void deactivate();

    void activateStandby();

private:
    // Initialization methods
    void setupPanel();
    void setupWifi();
    void setupBluetooth();

    // Functional methods
    void updateRelay();
    void updateUiActive();
    void updateUiSettings();
    void updateUiCurrentTemp();
    void updateBrewProgress();
    void updateStandby();

    // Event handlers
    void onOTAUpdate();
    void onTempRead(float temperature);

    // Private Attributes
    WebServer server;
    LilyGo_RGBPanel panel;
    NimBLEClientController clientController;
    hw_timer_t* timer;

    int mode;
    int targetBrewTemp;
    int targetSteamTemp;
    int targetWaterTemp;
    int targetDuration;
    int currentTemp;

    unsigned long activeUntil;
    unsigned long lastPing;
    unsigned long lastProgress;
    unsigned long lastAction;
    bool loaded;
    bool updating;

    // Pump tricle while steaming
    unsigned long steamPumpLastActivated = 0;       // Last activation timestamp for the pump in steam mode
    bool steamPumpOn = false;                       // State of the pump (whether it's currently on or off)
    unsigned long pumpOnDuration = 500;             // Pump "on" duration in milliseconds
    unsigned long pumpCycleInterval = 2000;         // Total cycle interval in milliseconds

};



#endif //CONTROLLER_H