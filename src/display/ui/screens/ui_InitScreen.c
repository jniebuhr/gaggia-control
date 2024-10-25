// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: Gaggiuino

#include "../ui.h"

void ui_InitScreen_screen_init(void)
{
ui_InitScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_InitScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
ui_object_set_themeable_style_property(ui_InitScreen, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_COLOR, _ui_theme_color_Dark);
ui_object_set_themeable_style_property(ui_InitScreen, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_BG_OPA, _ui_theme_alpha_Dark);

ui_InitScreen_Image2 = lv_img_create(ui_InitScreen);
lv_img_set_src(ui_InitScreen_Image2, &ui_img_1595653719);
lv_obj_set_width( ui_InitScreen_Image2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_InitScreen_Image2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_InitScreen_Image2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_InitScreen_Image2, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_InitScreen_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_InitScreen_Image2,120);

ui_InitScreen_Label3 = lv_label_create(ui_InitScreen);
lv_obj_set_width( ui_InitScreen_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_InitScreen_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_InitScreen_Label3, 0 );
lv_obj_set_y( ui_InitScreen_Label3, 150 );
lv_obj_set_align( ui_InitScreen_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_InitScreen_Label3,"Starting...");
ui_object_set_themeable_style_property(ui_InitScreen_Label3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR, _ui_theme_color_NiceWhite);
ui_object_set_themeable_style_property(ui_InitScreen_Label3, LV_PART_MAIN| LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA, _ui_theme_alpha_NiceWhite);
lv_obj_set_style_text_font(ui_InitScreen_Label3, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_InitScreen, ui_event_InitScreen, LV_EVENT_ALL, NULL);

}
