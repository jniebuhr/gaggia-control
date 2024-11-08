
#ifndef CONSTANTS_H
#define CONSTANTS_H

#define PING_INTERVAL 1000
#define PROGRESS_INTERVAL 250
#define HOT_WATER_SAFETY_DURATION_MS 30000
#define STEAM_SAFETY_DURATION_MS 60000
#define BREW_MIN_DURATION_MS 5000
#define BREW_MAX_DURATION_MS 120000
#define STANDBY_TIMEOUT_MS 900000
#define MIN_TEMP 0
#define MAX_TEMP 160
#define DEFAULT_TEMPERATURE_OFFSET 0
#define DEFAULT_PID "2.4,40,10"

#define MODE_STANDBY 0
#define MODE_BREW 1
#define MODE_STEAM 2
#define MODE_WATER 3

#define WIFI_CONNECT_ATTEMPTS 10

#endif // CONSTANTS_H
