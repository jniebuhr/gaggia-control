// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: Gaggiuino

#include "../ui.h"

void ui_StandbyScreen_screen_init(void)
{
ui_StandbyScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_StandbyScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_StandbyScreen, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_Dark);
ui_object_set_themeable_style_property(ui_StandbyScreen, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_Dark);

ui_StandbyScreen_Image1 = lv_img_create(ui_StandbyScreen);
lv_img_set_src(ui_StandbyScreen_Image1, &ui_img_gaggimate_png);
lv_obj_set_width( ui_StandbyScreen_Image1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_StandbyScreen_Image1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_StandbyScreen_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_StandbyScreen_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_StandbyScreen_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_StandbyScreen_Image1,210);

ui_StandbyScreen_text1 = lv_label_create(ui_StandbyScreen);
lv_obj_set_width( ui_StandbyScreen_text1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_StandbyScreen_text1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_StandbyScreen_text1, 0 );
lv_obj_set_y( ui_StandbyScreen_text1, 150 );
lv_obj_set_align( ui_StandbyScreen_text1, LV_ALIGN_CENTER );
lv_label_set_text(ui_StandbyScreen_text1,"Touch Screen to wake");
ui_object_set_themeable_style_property(ui_StandbyScreen_text1, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_NiceWhite);
ui_object_set_themeable_style_property(ui_StandbyScreen_text1, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_NiceWhite);
lv_obj_set_style_text_font(ui_StandbyScreen_text1, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_StandbyScreen_time = lv_label_create(ui_StandbyScreen);
lv_obj_set_width( ui_StandbyScreen_time, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_StandbyScreen_time, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_StandbyScreen_time, 0 );
lv_obj_set_y( ui_StandbyScreen_time, -150 );
lv_obj_set_align( ui_StandbyScreen_time, LV_ALIGN_CENTER );
lv_label_set_text(ui_StandbyScreen_time,"0:00");
ui_object_set_themeable_style_property(ui_StandbyScreen_time, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_NiceWhite);
ui_object_set_themeable_style_property(ui_StandbyScreen_time, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_NiceWhite);
lv_obj_set_style_text_align(ui_StandbyScreen_time, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_StandbyScreen_time, &lv_font_montserrat_34, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_StandbyScreen_bluetoothIcon = lv_img_create(ui_StandbyScreen);
lv_img_set_src(ui_StandbyScreen_bluetoothIcon, &ui_img_bluetooth_png);
lv_obj_set_width( ui_StandbyScreen_bluetoothIcon, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_StandbyScreen_bluetoothIcon, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_StandbyScreen_bluetoothIcon, -20 );
lv_obj_set_y( ui_StandbyScreen_bluetoothIcon, -100 );
lv_obj_set_align( ui_StandbyScreen_bluetoothIcon, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_StandbyScreen_bluetoothIcon, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_StandbyScreen_bluetoothIcon, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_StandbyScreen_bluetoothIcon, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_IMG_RECOLOR, _ui_theme_color_NiceWhite);
ui_object_set_themeable_style_property(ui_StandbyScreen_bluetoothIcon, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_IMG_RECOLOR_OPA, _ui_theme_alpha_NiceWhite);

ui_StandbyScreen_wifiIcon = lv_img_create(ui_StandbyScreen);
lv_img_set_src(ui_StandbyScreen_wifiIcon, &ui_img_wifi_png);
lv_obj_set_width( ui_StandbyScreen_wifiIcon, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_StandbyScreen_wifiIcon, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_StandbyScreen_wifiIcon, 20 );
lv_obj_set_y( ui_StandbyScreen_wifiIcon, -100 );
lv_obj_set_align( ui_StandbyScreen_wifiIcon, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_StandbyScreen_wifiIcon, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_StandbyScreen_wifiIcon, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_StandbyScreen_wifiIcon, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_IMG_RECOLOR, _ui_theme_color_NiceWhite);
ui_object_set_themeable_style_property(ui_StandbyScreen_wifiIcon, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_IMG_RECOLOR_OPA, _ui_theme_alpha_NiceWhite);

lv_obj_add_event_cb(ui_StandbyScreen, ui_event_StandbyScreen, LV_EVENT_ALL, NULL);

}
