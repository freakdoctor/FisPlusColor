/*
     ___ ___ _____ __  __   _   ___  ___
    | _ )_ _|_   _|  \/  | /_\ | _ \/ __|
    | _ \| |  | | | |\/| |/ _ \|  _/\__ \
    |___/___| |_| |_|  |_/_/ \_\_|  |___/
*/

static const uint8_t PROGMEM VW[] =
{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f,
  0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00,
  0x03, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x03, 0xff, 0xfe, 0x00,
  0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xe0, 0x00, 0x7f,
  0xff, 0x80, 0x00, 0x00, 0x3f, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0xf0,
  0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 0xff, 0xc7, 0xf8, 0x01, 0xfe, 0x3f, 0xf0, 0x00, 0x01, 0xff,
  0x87, 0xf8, 0x01, 0xfe, 0x1f, 0xf8, 0x00, 0x01, 0xff, 0x03, 0xfc, 0x03, 0xfc, 0x0f, 0xf8, 0x00,
  0x03, 0xfe, 0x03, 0xfc, 0x03, 0xfc, 0x07, 0xfc, 0x00, 0x07, 0xfc, 0x01, 0xfc, 0x07, 0xf8, 0x03,
  0xfe, 0x00, 0x07, 0xf8, 0x01, 0xfe, 0x07, 0xf8, 0x01, 0xfe, 0x00, 0x0f, 0xf8, 0x01, 0xfe, 0x07,
  0xf0, 0x03, 0xff, 0x00, 0x0f, 0xfc, 0x00, 0xff, 0x0f, 0xf0, 0x03, 0xff, 0x00, 0x1f, 0xfc, 0x00,
  0xff, 0x0f, 0xf0, 0x07, 0xff, 0x80, 0x1f, 0xfe, 0x00, 0x7f, 0x9f, 0xe0, 0x07, 0xff, 0x80, 0x1f,
  0xfe, 0x00, 0x7f, 0x9f, 0xe0, 0x07, 0xff, 0x80, 0x3f, 0xff, 0x00, 0x3f, 0xff, 0xc0, 0x0f, 0xff,
  0xc0, 0x3f, 0xff, 0x00, 0x3f, 0xff, 0xc0, 0x0f, 0xff, 0xc0, 0x3f, 0xff, 0x80, 0x1f, 0xff, 0x80,
  0x1f, 0xff, 0xc0, 0x3f, 0xff, 0x80, 0x1f, 0xff, 0x80, 0x1f, 0xff, 0xc0, 0x7f, 0xbf, 0xc0, 0x0f,
  0xff, 0x00, 0x3f, 0xdf, 0xe0, 0x7f, 0xbf, 0xc0, 0x0f, 0xff, 0x00, 0x3f, 0xdf, 0xe0, 0x7f, 0x1f,
  0xc0, 0x0f, 0xff, 0x00, 0x7f, 0x9f, 0xe0, 0x7f, 0x1f, 0xe0, 0x07, 0xfe, 0x00, 0x7f, 0x8f, 0xe0,
  0x7f, 0x1f, 0xe0, 0x07, 0xfe, 0x00, 0x7f, 0x0f, 0xe0, 0x7f, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0xff,
  0x0f, 0xe0, 0x7f, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0xff, 0x0f, 0xe0, 0x7f, 0x07, 0xf8, 0x07, 0xfe,
  0x01, 0xfe, 0x0f, 0xe0, 0x7f, 0x07, 0xf8, 0x07, 0xfe, 0x01, 0xfe, 0x0f, 0xe0, 0x7f, 0x03, 0xfc,
  0x0f, 0xfe, 0x03, 0xfc, 0x1f, 0xe0, 0x7f, 0x83, 0xfc, 0x0f, 0xff, 0x03, 0xfc, 0x1f, 0xe0, 0x7f,
  0x81, 0xfe, 0x0f, 0xff, 0x07, 0xf8, 0x1f, 0xc0, 0x3f, 0x81, 0xfe, 0x1f, 0xff, 0x87, 0xf8, 0x1f,
  0xc0, 0x3f, 0x80, 0xfe, 0x1f, 0xff, 0x8f, 0xf0, 0x1f, 0xc0, 0x3f, 0xc0, 0xff, 0x3f, 0xff, 0xcf,
  0xf0, 0x3f, 0xc0, 0x3f, 0xc0, 0xff, 0x3f, 0xff, 0xcf, 0xe0, 0x3f, 0xc0, 0x1f, 0xe0, 0x7f, 0xff,
  0x9f, 0xff, 0xe0, 0x7f, 0x80, 0x1f, 0xe0, 0x7f, 0xff, 0x9f, 0xff, 0xe0, 0x7f, 0x80, 0x1f, 0xf0,
  0x3f, 0xff, 0x0f, 0xff, 0xc0, 0xff, 0x00, 0x0f, 0xf0, 0x3f, 0xff, 0x0f, 0xff, 0xc0, 0xff, 0x00,
  0x0f, 0xf8, 0x1f, 0xfe, 0x07, 0xff, 0x81, 0xff, 0x00, 0x07, 0xf8, 0x1f, 0xfe, 0x07, 0xff, 0x83,
  0xfe, 0x00, 0x07, 0xfc, 0x0f, 0xfc, 0x07, 0xff, 0x03, 0xfc, 0x00, 0x03, 0xfe, 0x0f, 0xfc, 0x03,
  0xff, 0x07, 0xfc, 0x00, 0x01, 0xff, 0x0f, 0xfc, 0x03, 0xfe, 0x0f, 0xf8, 0x00, 0x01, 0xff, 0x87,
  0xf8, 0x01, 0xfe, 0x1f, 0xf8, 0x00, 0x00, 0xff, 0xe7, 0xf8, 0x01, 0xfe, 0x7f, 0xf0, 0x00, 0x00,
  0x7f, 0xf3, 0xf0, 0x00, 0xfc, 0xff, 0xe0, 0x00, 0x00, 0x3f, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xc0,
  0x00, 0x00, 0x1f, 0xff, 0xe0, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x7f,
  0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfe, 0x0f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff,
  0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x7f, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};

static const uint8_t PROGMEM Fdr[] =
{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x01, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x07, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x80, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x01, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 
  0xf8, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xc0, 
  0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf8, 
  0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 
  0xff, 0xc0, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x7f, 0xf8, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x1f, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0xc0, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x1f, 0xfe, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x01, 0xff, 0xe0, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x1f, 
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 
  0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 
  0xc0, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 
  0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x01, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x1f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xc0, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xf8, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x1f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 
  0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x80, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xc0, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xfc, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xc0, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xf8, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x1f, 
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x01, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 
  0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x3f, 
  0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x0f, 
  0xff, 0x80, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x7f, 0xfc, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x1f, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x01, 0xff, 0xe0, 0x00, 
  0x00, 0x03, 0xff, 0xc0, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xf8, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x1f, 0xfc, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf8, 0x01, 0xff, 
  0xe0, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 
  0xfc, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 
  0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xe0, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xe0, 0x00, 0x00, 
  0x00, 0x1f, 0xff, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x1f, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0xff, 0xe0, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x1f, 
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x01, 
  0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 
  0xf0, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x0f, 0xe0, 0x01, 
  0xfc, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x0f, 
  0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x0f, 0x78, 0x03, 0xde, 0x0f, 0xff, 0xc3, 0xff, 
  0xc3, 0xff, 0xf0, 0x0f, 0xfe, 0x1f, 0xff, 0xc0, 0xff, 0xf8, 0x07, 0xff, 0xe0, 0x1f, 0xfd, 0xff, 
  0xc0, 0x0f, 0x78, 0x03, 0xde, 0x3f, 0xff, 0xe3, 0xff, 0xc7, 0xff, 0xfc, 0x1f, 0xfe, 0x3f, 0xff, 
  0xc3, 0xff, 0xfe, 0x0f, 0xff, 0xf8, 0x3f, 0xfd, 0xff, 0xc0, 0x0f, 0x38, 0x07, 0x9e, 0x3f, 0xff, 
  0xf3, 0xff, 0xcf, 0xff, 0xfc, 0x3f, 0xfe, 0x7f, 0xff, 0xc7, 0xff, 0xff, 0x1f, 0xff, 0xf8, 0x7f, 
  0xfd, 0xff, 0xc0, 0x0f, 0x3c, 0x07, 0x9e, 0x3c, 0x00, 0xf0, 0x78, 0x0f, 0x00, 0x1e, 0x3c, 0x00, 
  0x78, 0x00, 0x07, 0x80, 0x0f, 0x1e, 0x00, 0x7c, 0x78, 0x00, 0x3c, 0x00, 0x0f, 0x3c, 0x0f, 0x1e, 
  0x38, 0x00, 0x70, 0x78, 0x0e, 0x00, 0x1e, 0x3c, 0x00, 0x78, 0x00, 0x07, 0x80, 0x0f, 0x1c, 0x00, 
  0x3c, 0x78, 0x00, 0x3c, 0x00, 0x0f, 0x1e, 0x0f, 0x1e, 0x78, 0x00, 0x70, 0x78, 0x0e, 0x00, 0x1e, 
  0x38, 0x00, 0x7f, 0xff, 0x07, 0x80, 0x0f, 0x1c, 0x00, 0x3c, 0x70, 0x00, 0x3c, 0x00, 0x0f, 0x1e, 
  0x0e, 0x1e, 0x78, 0x00, 0x70, 0x78, 0x0e, 0x00, 0x1e, 0x38, 0x00, 0x3f, 0xff, 0xc7, 0x80, 0x0f, 
  0x1c, 0x00, 0x3c, 0x70, 0x00, 0x3c, 0x00, 0x0f, 0x0f, 0x1e, 0x1e, 0x78, 0x00, 0x70, 0x78, 0x0e, 
  0x00, 0x1e, 0x38, 0x00, 0x1f, 0xff, 0xc7, 0x80, 0x0f, 0x1c, 0x00, 0x3c, 0x70, 0x00, 0x3c, 0x00, 
  0x0f, 0x0f, 0x1e, 0x1e, 0x78, 0x00, 0x70, 0x78, 0x0e, 0x00, 0x1e, 0x38, 0x00, 0x00, 0x01, 0xc7, 
  0x80, 0x0f, 0x1c, 0x00, 0x3c, 0x70, 0x00, 0x3c, 0x00, 0x0f, 0x07, 0x3c, 0x1e, 0x38, 0x00, 0x70, 
  0x78, 0x0e, 0x00, 0x1e, 0x38, 0x00, 0x00, 0x01, 0xe7, 0x80, 0x0f, 0x1c, 0x00, 0x3c, 0x70, 0x00, 
  0x3c, 0x00, 0x0f, 0x07, 0xb8, 0x1e, 0x3c, 0x00, 0xf0, 0x78, 0x0f, 0x00, 0x3e, 0x38, 0x00, 0x00, 
  0x01, 0xe7, 0x80, 0x0f, 0x1e, 0x00, 0x7c, 0x70, 0x00, 0x3c, 0x00, 0x0f, 0x03, 0xf8, 0x1e, 0x3f, 
  0xff, 0xf0, 0x3f, 0xcf, 0xff, 0xfc, 0x38, 0x00, 0x7f, 0xff, 0xc7, 0xff, 0xfe, 0x1f, 0xff, 0xf8, 
  0x70, 0x00, 0x1f, 0xe0, 0x0f, 0x03, 0xf0, 0x1e, 0x1f, 0xff, 0xe0, 0x3f, 0xc7, 0xff, 0xfc, 0x38, 
  0x00, 0x7f, 0xff, 0xc7, 0xff, 0xfe, 0x0f, 0xff, 0xf8, 0x70, 0x00, 0x1f, 0xe0, 0x0f, 0x01, 0xf0, 
  0x1e, 0x0f, 0xff, 0xc0, 0x0f, 0xc1, 0xff, 0xf0, 0x38, 0x00, 0x7f, 0xff, 0x87, 0xff, 0xf8, 0x07, 
  0xff, 0xe0, 0x70, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const uint8_t PROGMEM Setup [] =
{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x07, 0xe0, 0x00,
  0x00, 0x07, 0xe0, 0x80, 0x07, 0xcf, 0xf3, 0xe0, 0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf0,
  0x0f, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xe0, 0x07, 0xfc, 0x3f, 0xe0,
  0x07, 0xf0, 0x0f, 0xe0, 0x3f, 0xf0, 0x0f, 0xfc, 0x7f, 0xe0, 0x07, 0xfe, 0x7f, 0xe0, 0x07, 0xfe,
  0x7f, 0xe0, 0x07, 0xfe, 0x7f, 0xe0, 0x07, 0xfe, 0x3f, 0xf0, 0x0f, 0xfc, 0x07, 0xf0, 0x0f, 0xe0,
  0x07, 0xfc, 0x3f, 0xe0, 0x07, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xf0,
  0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf0, 0x07, 0xcf, 0xf3, 0xe0, 0x01, 0x07, 0xe0, 0x00,
  0x00, 0x07, 0xe0, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const uint8_t PROGMEM Temp [] =
{
  0x00, 0x0f, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x39, 0xc0, 0x00, 0x00, 0x30, 0xcf, 0xc0,
  0x00, 0x30, 0xcf, 0xc0, 0x00, 0x30, 0xc0, 0x00, 0x00, 0x30, 0xc0, 0x00, 0x00, 0x30, 0xcf, 0xc0,
  0x00, 0x30, 0xcf, 0xc0, 0x00, 0x30, 0xc0, 0x00, 0x00, 0x30, 0xc0, 0x00, 0x00, 0x36, 0xcf, 0xc0,
  0x00, 0x36, 0xcf, 0xc0, 0x00, 0x36, 0xc0, 0x00, 0x00, 0x36, 0xc0, 0x00, 0x00, 0x36, 0xc7, 0xc0,
  0x00, 0x36, 0xc7, 0xc0, 0x00, 0x76, 0xe0, 0x00, 0x00, 0xf6, 0xf0, 0x00, 0x01, 0xcf, 0x38, 0x00,
  0x01, 0xbf, 0xd8, 0x00, 0x03, 0xff, 0xdc, 0x00, 0x03, 0x7f, 0xec, 0x00, 0x03, 0x7f, 0xec, 0x00,
  0x03, 0x7f, 0xec, 0x00, 0x03, 0x7f, 0xec, 0x00, 0x03, 0xff, 0xdc, 0x00, 0x01, 0xbf, 0xd8, 0x00,
  0x01, 0xcf, 0x38, 0x00, 0x00, 0xe0, 0x70, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x1f, 0x80, 0x00
};

static const uint8_t PROGMEM Turbo [] =
{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xfc, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x31, 0x80, 0x00, 0x03, 0xb0, 0xc0,
  0x00, 0x19, 0xb0, 0xc0, 0x3e, 0x3f, 0xf2, 0x40, 0x06, 0x0f, 0xf6, 0x60, 0x06, 0x0f, 0xfc, 0x60,
  0x06, 0x3f, 0xf8, 0x60, 0x06, 0x3f, 0xf0, 0x60, 0x02, 0x27, 0xfe, 0x7c, 0x03, 0x0f, 0xfc, 0x00,
  0x03, 0x0d, 0xc0, 0x00, 0x01, 0x84, 0xc0, 0x00, 0x00, 0xc4, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00,
  0x00, 0x3e, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const uint8_t PROGMEM Lambda [] =
{
  0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0xe0, 0x00, 0x1f, 0xf0, 0x00, 0x1f, 0xf0, 0x00, 0x13, 
  0xf8, 0x00, 0x01, 0xf8, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfe, 
  0x00, 0x00, 0xfe, 0x00, 0x01, 0xfe, 0x00, 0x01, 0xff, 0x00, 0x01, 0xff, 0x00, 0x03, 0xff, 0x00, 
  0x03, 0xff, 0x00, 0x07, 0xff, 0x80, 0x07, 0xdf, 0x80, 0x07, 0xcf, 0x80, 0x0f, 0xcf, 0xc0, 0x0f, 
  0x8f, 0xc0, 0x0f, 0x87, 0xc0, 0x1f, 0x87, 0xe0, 0x1f, 0x07, 0xe0, 0x1f, 0x03, 0xf0, 0x3f, 0x03, 
  0xf8, 0x3e, 0x03, 0xfc, 0x7e, 0x01, 0xfc, 0x7e, 0x01, 0xfc, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00
};

static const uint8_t PROGMEM Trip [] =
{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xff, 0xf8, 0x00, 0x01, 0x80, 0x0c, 0x00, 0x03, 0x00, 0x06, 0x00, 0x02, 0x00, 0x03, 0x00, 
  0x04, 0x00, 0x01, 0x00, 0x0c, 0x00, 0x00, 0xc0, 0x38, 0x00, 0x00, 0x78, 0x60, 0x00, 0x00, 0x0e, 
  0x40, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x03, 0xc7, 0xc0, 0x01, 0xf3, 0xcc, 0x40, 0x03, 0x13, 
  0x78, 0x20, 0x06, 0x1e, 0x38, 0x3f, 0xfe, 0x1c, 0x0c, 0x60, 0x03, 0x10, 0x07, 0xc0, 0x01, 0xf0, 
  0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const uint8_t PROGMEM Map [] =
{
  0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x07, 
  0xff, 0x0e, 0x0e, 0x07, 0xc7, 0x0e, 0x0e, 0x07, 0xc7, 0x0e, 0x0e, 0x07, 0xc7, 0x0f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xc7, 0x0e, 0x0e, 0x07, 0xc7, 0x0e, 0x0e, 0x07, 
  0xc7, 0x0e, 0x0e, 0x07, 0xc7, 0x0e, 0x0e, 0x07, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe7, 0xff, 0xff, 0xff, 0xc7, 0x0e, 0x0e, 0x07, 0xc7, 0x0e, 0x0e, 0x07, 0xc7, 0x0e, 0x0e, 0x07, 
  0xc7, 0x0e, 0x0e, 0x07, 0xe7, 0x0e, 0x0e, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0xff, 
  0xc7, 0x0e, 0x3f, 0xff, 0xc7, 0x0e, 0x0e, 0x07, 0xc7, 0x0e, 0x0e, 0x07, 0xff, 0xce, 0x0e, 0x07, 
  0x7f, 0xff, 0xfe, 0x07, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x0f
};
