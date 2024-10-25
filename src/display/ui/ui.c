// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: Gaggiuino

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_InitScreen
void ui_InitScreen_screen_init(void);
void ui_event_InitScreen( lv_event_t * e);
lv_obj_t *ui_InitScreen;
lv_obj_t *ui_InitScreen_Image2;
lv_obj_t *ui_InitScreen_Label3;


// SCREEN: ui_ProfileScreen
void ui_ProfileScreen_screen_init(void);
void ui_event_ProfileScreen( lv_event_t * e);
lv_obj_t *ui_ProfileScreen;
lv_obj_t *ui_ProfileScreen_tempGauge;
lv_obj_t *ui_ProfileScreen_tempTarget;
lv_obj_t *ui_ProfileScreen_ImgButton1;
lv_obj_t *ui_ProfileScreen_tempText;
lv_obj_t *ui_ProfileScreen_contentPanel;
lv_obj_t *ui_ProfileScreen_mainLabel;
void ui_event_ProfileScreen_profileChoices( lv_event_t * e);
lv_obj_t *ui_ProfileScreen_profileChoices;


// SCREEN: ui_MenuScreen
void ui_MenuScreen_screen_init(void);
lv_obj_t *ui_MenuScreen;
lv_obj_t *ui_MenuScreen_tempGauge;
lv_obj_t *ui_MenuScreen_tempTarget;
lv_obj_t *ui_MenuScreen_tempText;
lv_obj_t *ui_MenuScreen_contentPanel1;
lv_obj_t *ui_MenuScreen_grindButton1;
void ui_event_MenuScreen_brewButton1( lv_event_t * e);
lv_obj_t *ui_MenuScreen_brewButton1;
void ui_event_MenuScreen_profileButton1( lv_event_t * e);
lv_obj_t *ui_MenuScreen_profileButton1;
void ui_event_MenuScreen_extrasButton1( lv_event_t * e);
lv_obj_t *ui_MenuScreen_extrasButton1;
lv_obj_t *ui_MenuScreen_mainLabel4;
void ui_event_MenuScreen_standbyButton( lv_event_t * e);
lv_obj_t *ui_MenuScreen_standbyButton;


// SCREEN: ui_StatusScreen
void ui_StatusScreen_screen_init(void);
void ui_event_StatusScreen( lv_event_t * e);
lv_obj_t *ui_StatusScreen;
lv_obj_t *ui_StatusScreen_tempGauge;
lv_obj_t *ui_StatusScreen_tempTarget;
lv_obj_t *ui_StatusScreen_ImgButton3;
lv_obj_t *ui_StatusScreen_tempText;
lv_obj_t *ui_StatusScreen_contentPanel2;
lv_obj_t *ui_StatusScreen_mainLabel1;
lv_obj_t *ui_StatusScreen_progressBar;
lv_obj_t *ui_StatusScreen_progressLabel;
lv_obj_t *ui_StatusScreen_targetTempHelp;
lv_obj_t *ui_StatusScreen_targetDurationHelp;
lv_obj_t *ui_StatusScreen_targetDuration;
lv_obj_t *ui_StatusScreen_targetTemp;
void ui_event_StatusScreen_pauseButton( lv_event_t * e);
lv_obj_t *ui_StatusScreen_pauseButton;


// SCREEN: ui_GrindScreen
void ui_GrindScreen_screen_init(void);
void ui_event_GrindScreen( lv_event_t * e);
lv_obj_t *ui_GrindScreen;
lv_obj_t *ui_GrindScreen_tempGauge4;
lv_obj_t *ui_GrindScreen_tempTargetBrew2;
lv_obj_t *ui_GrindScreen_ImgButton4;
lv_obj_t *ui_GrindScreen_tempText7;
lv_obj_t *ui_GrindScreen_contentPanel3;
lv_obj_t *ui_GrindScreen_mainLabel2;
lv_obj_t *ui_GrindScreen_Bar2;
lv_obj_t *ui_GrindScreen_progressLabel1;
lv_obj_t *ui_GrindScreen_selectedProfile1;
lv_obj_t *ui_GrindScreen_targetPressureHelp3;
lv_obj_t *ui_GrindScreen_pauseButton1;
lv_obj_t *ui_GrindScreen_tareButton1;


// SCREEN: ui_BrewScreen
void ui_BrewScreen_screen_init(void);
void ui_event_BrewScreen( lv_event_t * e);
lv_obj_t *ui_BrewScreen;
lv_obj_t *ui_BrewScreen_tempGauge;
lv_obj_t *ui_BrewScreen_tempTarget;
lv_obj_t *ui_BrewScreen_ImgButton5;
lv_obj_t *ui_BrewScreen_tempText;
lv_obj_t *ui_BrewScreen_contentPanel4;
lv_obj_t *ui_BrewScreen_mainLabel3;
lv_obj_t *ui_BrewScreen_targetTempHelp1;
lv_obj_t *ui_BrewScreen_targetPressureHelp2;
void ui_event_BrewScreen_startButton( lv_event_t * e);
lv_obj_t *ui_BrewScreen_startButton;
void ui_event_BrewScreen_downTempButton( lv_event_t * e);
lv_obj_t *ui_BrewScreen_downTempButton;
void ui_event_BrewScreen_upTempButton( lv_event_t * e);
lv_obj_t *ui_BrewScreen_upTempButton;
void ui_event_BrewScreen_downDurationButton( lv_event_t * e);
lv_obj_t *ui_BrewScreen_downDurationButton;
void ui_event_BrewScreen_upDurationButton( lv_event_t * e);
lv_obj_t *ui_BrewScreen_upDurationButton;
lv_obj_t *ui_BrewScreen_targetTemp;
lv_obj_t *ui_BrewScreen_targetDuration;


// SCREEN: ui_SteamScreen
void ui_SteamScreen_screen_init(void);
void ui_event_SteamScreen( lv_event_t * e);
lv_obj_t *ui_SteamScreen;
lv_obj_t *ui_SteamScreen_tempGauge;
lv_obj_t *ui_SteamScreen_tempTarget;
lv_obj_t *ui_SteamScreen_ImgButton6;
lv_obj_t *ui_SteamScreen_tempText;
lv_obj_t *ui_SteamScreen_contentPanel5;
lv_obj_t *ui_SteamScreen_mainLabel5;
lv_obj_t *ui_SteamScreen_targetTempHelp2;
void ui_event_SteamScreen_goButton( lv_event_t * e);
lv_obj_t *ui_SteamScreen_goButton;
void ui_event_SteamScreen_downTempButton( lv_event_t * e);
lv_obj_t *ui_SteamScreen_downTempButton;
void ui_event_SteamScreen_upTempButton( lv_event_t * e);
lv_obj_t *ui_SteamScreen_upTempButton;
lv_obj_t *ui_SteamScreen_targetTemp;


// SCREEN: ui_WaterScreen
void ui_WaterScreen_screen_init(void);
void ui_event_WaterScreen( lv_event_t * e);
lv_obj_t *ui_WaterScreen;
lv_obj_t *ui_WaterScreen_tempGauge;
lv_obj_t *ui_WaterScreen_tempTarget;
lv_obj_t *ui_WaterScreen_ImgButton7;
lv_obj_t *ui_WaterScreen_tempText;
lv_obj_t *ui_WaterScreen_contentPanel6;
lv_obj_t *ui_WaterScreen_mainLabel6;
lv_obj_t *ui_WaterScreen_targetTempHelp3;
void ui_event_WaterScreen_goButton( lv_event_t * e);
lv_obj_t *ui_WaterScreen_goButton;
void ui_event_WaterScreen_downTempButton( lv_event_t * e);
lv_obj_t *ui_WaterScreen_downTempButton;
void ui_event_WaterScreen_upTempButton( lv_event_t * e);
lv_obj_t *ui_WaterScreen_upTempButton;
lv_obj_t *ui_WaterScreen_targetTemp;


// SCREEN: ui_StandbyScreen
void ui_StandbyScreen_screen_init(void);
void ui_event_StandbyScreen( lv_event_t * e);
lv_obj_t *ui_StandbyScreen;
lv_obj_t *ui_StandbyScreen_Image1;
lv_obj_t *ui_StandbyScreen_text1;
lv_obj_t *ui_StandbyScreen_time;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_257442185[1] = {&ui_img_2106667244};
const lv_img_dsc_t *ui_imgset_1543159247[1] = {&ui_img_2056842146};
const lv_img_dsc_t *ui_imgset_1856043536[1] = {&ui_img_2100879889};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_InitScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      onLoadStarted( e );
}
}
void ui_event_ProfileScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_MenuScreen_screen_init);
}
}
void ui_event_ProfileScreen_profileChoices( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      _ui_screen_change( &ui_StatusScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_StatusScreen_screen_init);
}
}
void ui_event_MenuScreen_brewButton1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_BrewScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_BrewScreen_screen_init);
      onBrewScreen( e );
}
}
void ui_event_MenuScreen_profileButton1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_WaterScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_WaterScreen_screen_init);
      onWaterScreen( e );
}
}
void ui_event_MenuScreen_extrasButton1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_SteamScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_SteamScreen_screen_init);
      onSteamScreen( e );
}
}
void ui_event_MenuScreen_standbyButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onStandby( e );
}
}
void ui_event_StatusScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_MenuScreen_screen_init);
}
}
void ui_event_StatusScreen_pauseButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onBrewCancel( e );
      ( e );
      _ui_screen_change( &ui_BrewScreen, LV_SCR_LOAD_ANIM_NONE, 500, 0, &ui_BrewScreen_screen_init);
}
}
void ui_event_GrindScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_MenuScreen_screen_init);
}
}
void ui_event_BrewScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_MenuScreen_screen_init);
}
}
void ui_event_BrewScreen_startButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onBrewStart( e );
      _ui_screen_change( &ui_StatusScreen, LV_SCR_LOAD_ANIM_NONE, 500, 0, &ui_StatusScreen_screen_init);
}
}
void ui_event_BrewScreen_downTempButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onBrewTempLower( e );
}
}
void ui_event_BrewScreen_upTempButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onBrewTempRaise( e );
}
}
void ui_event_BrewScreen_downDurationButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onBrewTimeLower( e );
}
}
void ui_event_BrewScreen_upDurationButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onBrewTimeRaise( e );
}
}
void ui_event_SteamScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_MenuScreen_screen_init);
}
}
void ui_event_SteamScreen_goButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onSteamToggle( e );
}
}
void ui_event_SteamScreen_downTempButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onSteamTempLower( e );
}
}
void ui_event_SteamScreen_upTempButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onSteamTempRaise( e );
}
}
void ui_event_WaterScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_MenuScreen_screen_init);
}
}
void ui_event_WaterScreen_goButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onWaterToggle( e );
}
}
void ui_event_WaterScreen_downTempButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onWaterTempLower( e );
}
}
void ui_event_WaterScreen_upTempButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onWaterTempRaise( e );
}
}
void ui_event_StandbyScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_PRESSED) {
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_MenuScreen_screen_init);
      onWakeup( e );
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_InitScreen_screen_init();
ui_ProfileScreen_screen_init();
ui_MenuScreen_screen_init();
ui_StatusScreen_screen_init();
ui_GrindScreen_screen_init();
ui_BrewScreen_screen_init();
ui_SteamScreen_screen_init();
ui_WaterScreen_screen_init();
ui_StandbyScreen_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_InitScreen);
}
