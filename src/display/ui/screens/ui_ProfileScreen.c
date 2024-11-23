// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: GaggiMate

#include "../ui.h"

void ui_ProfileScreen_screen_init(void)
{
ui_ProfileScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_ProfileScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_ProfileScreen, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_Dark);
ui_object_set_themeable_style_property(ui_ProfileScreen, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_Dark);

ui_ProfileScreen_tempGauge = lv_arc_create(ui_ProfileScreen);
lv_obj_set_width( ui_ProfileScreen_tempGauge, 440);
lv_obj_set_height( ui_ProfileScreen_tempGauge, 440);
lv_obj_set_align( ui_ProfileScreen_tempGauge, LV_ALIGN_CENTER );
lv_arc_set_range(ui_ProfileScreen_tempGauge, 0,160);
lv_arc_set_value(ui_ProfileScreen_tempGauge, 92);
lv_arc_set_bg_angles(ui_ProfileScreen_tempGauge,110,70);
lv_obj_set_style_arc_width(ui_ProfileScreen_tempGauge, 8, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_color(ui_ProfileScreen_tempGauge, lv_color_hex(0xFF4E4E), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_ProfileScreen_tempGauge, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_ProfileScreen_tempGauge, 8, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_ProfileScreen_tempGauge, lv_color_hex(0xD10000), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ProfileScreen_tempGauge, 0, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_ProfileScreen_tempTarget = lv_arc_create(ui_ProfileScreen);
lv_obj_set_width( ui_ProfileScreen_tempTarget, 440);
lv_obj_set_height( ui_ProfileScreen_tempTarget, 440);
lv_obj_set_align( ui_ProfileScreen_tempTarget, LV_ALIGN_CENTER );
lv_arc_set_range(ui_ProfileScreen_tempTarget, 0,160);
lv_arc_set_value(ui_ProfileScreen_tempTarget, 92);
lv_arc_set_bg_angles(ui_ProfileScreen_tempTarget,110,70);
lv_obj_set_style_bg_color(ui_ProfileScreen_tempTarget, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ProfileScreen_tempTarget, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_color(ui_ProfileScreen_tempTarget, lv_color_hex(0x4040FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_ProfileScreen_tempTarget, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_ProfileScreen_tempTarget, 8, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_ProfileScreen_tempTarget, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ProfileScreen_tempTarget, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_color(ui_ProfileScreen_tempTarget, lv_color_hex(0xFF4E4E), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_ProfileScreen_tempTarget, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_ProfileScreen_tempTarget, 8, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_ProfileScreen_tempTarget, lv_color_hex(0xFF0000), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ProfileScreen_tempTarget, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_ProfileScreen_ImgButton1 = lv_imgbtn_create(ui_ProfileScreen);
lv_imgbtn_set_src(ui_ProfileScreen_ImgButton1, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1895594966, NULL);
lv_obj_set_width( ui_ProfileScreen_ImgButton1, 40);
lv_obj_set_height( ui_ProfileScreen_ImgButton1, 40);
lv_obj_set_x( ui_ProfileScreen_ImgButton1, 0 );
lv_obj_set_y( ui_ProfileScreen_ImgButton1, 210 );
lv_obj_set_align( ui_ProfileScreen_ImgButton1, LV_ALIGN_CENTER );
lv_obj_set_style_img_recolor(ui_ProfileScreen_ImgButton1, lv_color_hex(0xFAFAFA), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor_opa(ui_ProfileScreen_ImgButton1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ProfileScreen_tempText = lv_label_create(ui_ProfileScreen);
lv_obj_set_width( ui_ProfileScreen_tempText, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ProfileScreen_tempText, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ProfileScreen_tempText, 0 );
lv_obj_set_y( ui_ProfileScreen_tempText, -196 );
lv_obj_set_align( ui_ProfileScreen_tempText, LV_ALIGN_CENTER );
lv_label_set_text(ui_ProfileScreen_tempText,"92°C");
lv_obj_set_style_text_color(ui_ProfileScreen_tempText, lv_color_hex(0xFAFAFA), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_ProfileScreen_tempText, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_ProfileScreen_tempText, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ProfileScreen_contentPanel = lv_obj_create(ui_ProfileScreen);
lv_obj_set_width( ui_ProfileScreen_contentPanel, 360);
lv_obj_set_height( ui_ProfileScreen_contentPanel, 360);
lv_obj_set_align( ui_ProfileScreen_contentPanel, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_ProfileScreen_contentPanel, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_ProfileScreen_contentPanel, 180, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_ProfileScreen_contentPanel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_Transparent);
ui_object_set_themeable_style_property(ui_ProfileScreen_contentPanel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_Transparent);
ui_object_set_themeable_style_property(ui_ProfileScreen_contentPanel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR, _ui_theme_color_NiceWhite);
ui_object_set_themeable_style_property(ui_ProfileScreen_contentPanel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA, _ui_theme_alpha_NiceWhite);

ui_ProfileScreen_mainLabel = lv_label_create(ui_ProfileScreen_contentPanel);
lv_obj_set_width( ui_ProfileScreen_mainLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ProfileScreen_mainLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ProfileScreen_mainLabel, 0 );
lv_obj_set_y( ui_ProfileScreen_mainLabel, -160 );
lv_obj_set_align( ui_ProfileScreen_mainLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_ProfileScreen_mainLabel,"Profiles");
ui_object_set_themeable_style_property(ui_ProfileScreen_mainLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_NiceWhite);
ui_object_set_themeable_style_property(ui_ProfileScreen_mainLabel, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_NiceWhite);
lv_obj_set_style_text_font(ui_ProfileScreen_mainLabel, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ProfileScreen_profileChoices = lv_roller_create(ui_ProfileScreen_contentPanel);
lv_roller_set_options( ui_ProfileScreen_profileChoices, "Default\nMoretto\nLight Roast", LV_ROLLER_MODE_NORMAL );
lv_roller_set_selected( ui_ProfileScreen_profileChoices, 2, LV_ANIM_OFF);
lv_obj_set_width( ui_ProfileScreen_profileChoices, 360);
lv_obj_set_height( ui_ProfileScreen_profileChoices, 360);
lv_obj_set_align( ui_ProfileScreen_profileChoices, LV_ALIGN_CENTER );
ui_object_set_themeable_style_property(ui_ProfileScreen_profileChoices, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_NiceWhite);
ui_object_set_themeable_style_property(ui_ProfileScreen_profileChoices, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_NiceWhite);
lv_obj_set_style_text_font(ui_ProfileScreen_profileChoices, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_ProfileScreen_profileChoices, 180, LV_PART_MAIN| LV_STATE_DEFAULT);
ui_object_set_themeable_style_property(ui_ProfileScreen_profileChoices, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_Transparent);
ui_object_set_themeable_style_property(ui_ProfileScreen_profileChoices, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_Transparent);
lv_obj_set_style_clip_corner(ui_ProfileScreen_profileChoices, true, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_object_set_themeable_style_property(ui_ProfileScreen_profileChoices, LV_PART_SELECTED| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_SemiDark);
ui_object_set_themeable_style_property(ui_ProfileScreen_profileChoices, LV_PART_SELECTED| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_SemiDark);
ui_object_set_themeable_style_property(ui_ProfileScreen_profileChoices, LV_PART_SELECTED| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_NiceWhite);
ui_object_set_themeable_style_property(ui_ProfileScreen_profileChoices, LV_PART_SELECTED| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_NiceWhite);

lv_obj_add_event_cb(ui_ProfileScreen_profileChoices, ui_event_ProfileScreen_profileChoices, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_ProfileScreen, ui_event_ProfileScreen, LV_EVENT_ALL, NULL);

}
