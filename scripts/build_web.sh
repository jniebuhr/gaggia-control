#!/usr/bin/env bash

npx tailwindcss -i ./web/style.css -o ./web/style.min.css
index_html=$(npx minify ./web/index.html)
settings_html=$(npx minify ./web/settings.html)
gm_svg=$(cat ./web/gm.svg)
style_css=$(npx minify ./web/style.min.css)
{
  echo "// This is an autogenerated file. Please check the build instructions on how to generate it"
  echo "#pragma once"
  echo "#include <Arduino.h>"
  echo "const char index_html[] PROGMEM = R\"***("
  echo "$index_html"
  echo ")***\";"
  echo "const char settings_html[] PROGMEM = R\"***("
  echo "$settings_html"
  echo ")***\";"
  echo "const char style_css[] PROGMEM = R\"***("
  echo "$style_css"
  echo ")***\";"
  echo "const char gm_svg[] PROGMEM = R\"***("
  echo "$gm_svg"
  echo ")***\";"
} > ./src/display/web/html.h
