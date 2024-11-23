// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: GaggiMate

#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H

#ifdef __cplusplus
extern "C" {
#endif

void onLoadStarted(lv_event_t * e);
void onBrewScreen(lv_event_t * e);
void onWaterScreen(lv_event_t * e);
void onSteamScreen(lv_event_t * e);
void onStandby(lv_event_t * e);
void onBrewStart(lv_event_t * e);
void onBrewTempLower(lv_event_t * e);
void onBrewTempRaise(lv_event_t * e);
void onBrewTimeLower(lv_event_t * e);
void onBrewTimeRaise(lv_event_t * e);
void onSteamToggle(lv_event_t * e);
void onSteamTempLower(lv_event_t * e);
void onSteamTempRaise(lv_event_t * e);
void onWaterToggle(lv_event_t * e);
void onWaterTempLower(lv_event_t * e);
void onWaterTempRaise(lv_event_t * e);
void onWakeup(lv_event_t * e);
void onBrewCancel(lv_event_t * e);
void onGrindToggle(lv_event_t * e);
void onGrindTimeLower(lv_event_t * e);
void onGrindTimeRaise(lv_event_t * e);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
