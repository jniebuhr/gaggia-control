// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: GaggiMate

#include <Arduino.h>
#include "ui.h"
#include "../main.h"


void onBrewCancel(lv_event_t * e)
{
  controller.deactivate();
}

void onBrewStart(lv_event_t * e)
{
  controller.activate();
}

void onBrewTempLower(lv_event_t * e)
{
  controller.lowerTemp();
}

void onBrewTempRaise(lv_event_t * e)
{
  controller.raiseTemp();
}

void onBrewTimeLower(lv_event_t * e)
{
  int newDuration = controller.getTargetDuration() - 1000;
  if (newDuration < BREW_MIN_DURATION_MS) {
    newDuration = BREW_MIN_DURATION_MS;
  }
  controller.setTargetDuration(newDuration);
}

void onBrewTimeRaise(lv_event_t * e)
{
  int newDuration = controller.getTargetDuration() + 1000;
  if (newDuration > BREW_MAX_DURATION_MS) {
    newDuration = BREW_MIN_DURATION_MS;
  }
  controller.setTargetDuration(newDuration);
}

void onSteamToggle(lv_event_t * e)
{
  controller.isActive() ? controller.deactivate() : controller.activate();
}

void onSteamTempLower(lv_event_t * e)
{
  controller.lowerTemp();
}

void onSteamTempRaise(lv_event_t * e)
{
  controller.raiseTemp();
}

void onBrewScreen(lv_event_t * e)
{
  controller.deactivate();
  controller.setMode(MODE_BREW);
}

void onWaterScreen(lv_event_t * e)
{
  controller.setMode(MODE_WATER);
  controller.deactivate();
}

void onSteamScreen(lv_event_t * e)
{
  controller.setMode(MODE_STEAM);
  controller.deactivate();
}

void onWaterToggle(lv_event_t * e)
{
  controller.isActive() ? controller.deactivate() : controller.activate();
}

void onWakeup(lv_event_t * e)
{
  controller.deactivate();
  controller.setMode(MODE_BREW);
}

void onWaterTempLower(lv_event_t * e)
{
  controller.lowerTemp();
}

void onWaterTempRaise(lv_event_t * e)
{
  controller.raiseTemp();
}

void onLoadStarted(lv_event_t * e)
{
  controller.connect();
}

void onStandby(lv_event_t * e)
{
  controller.activateStandby();
}

void onGrindToggle(lv_event_t * e)
{
  controller.isGrindActive() ? controller.deactivateGrind() : controller.activateGrind();
}

void onGrindTimeLower(lv_event_t * e)
{
  int newDuration = controller.getTargetGrindDuration() - 1000;
  if (newDuration < BREW_MIN_DURATION_MS) {
    newDuration = BREW_MIN_DURATION_MS;
  }
  controller.setTargetGrindDuration(newDuration);
}

void onGrindTimeRaise(lv_event_t * e)
{
  int newDuration = controller.getTargetGrindDuration() + 1000;
  if (newDuration > BREW_MAX_DURATION_MS) {
    newDuration = BREW_MIN_DURATION_MS;
  }
  controller.setTargetGrindDuration(newDuration);
}
