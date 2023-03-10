// see https://javl.github.io/image2cpp/ to canvert your picture to bitmap code

#define HP_WIDTH 97
#define HP_HEIGHT 64
static const unsigned char hp[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00,
  0x00, 0x3f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff,
  0xf0, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x07, 0xe0, 0x00, 0x00, 0x03, 0xf0, 0x01, 0xf8, 0x00, 0x00,
  0x00, 0x1f, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x3e, 0x00,
  0x00, 0xf8, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x78, 0x00,
  0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x1e, 0x00,
  0x00, 0x07, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x07, 0x80,
  0x00, 0x01, 0xe0, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x38, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x01, 0xc0,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x78, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x01, 0xce, 0x00, 0x00, 0x07,
  0x0f, 0xf8, 0x71, 0x80, 0x00, 0x01, 0xc0, 0x00, 0x03, 0xcc, 0x00, 0x00, 0x07, 0x3f, 0xff, 0x73,
  0x80, 0x00, 0x00, 0xe0, 0x00, 0x03, 0x9c, 0x00, 0x00, 0x03, 0xff, 0xff, 0xe3, 0x80, 0x00, 0x00,
  0xe0, 0x00, 0x03, 0x9c, 0x00, 0x00, 0x03, 0xf8, 0x07, 0xe3, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x03,
  0x98, 0x00, 0x00, 0x03, 0xe0, 0x01, 0xe3, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x07, 0x98, 0x00, 0x00,
  0x03, 0x80, 0x00, 0xe7, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x7f, 0x98, 0x00, 0x00, 0x03, 0x80, 0x00,
  0xe7, 0x00, 0x00, 0x00, 0xff, 0x00, 0x7f, 0x98, 0x00, 0x00, 0x03, 0x80, 0x00, 0xe7, 0x00, 0x00,
  0x00, 0xff, 0x00, 0x3f, 0x9c, 0x00, 0x00, 0x03, 0x80, 0x00, 0xe7, 0x00, 0x00, 0x00, 0xff, 0x00,
  0x03, 0x9c, 0x00, 0x00, 0x03, 0x80, 0x00, 0xe3, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x03, 0x9c, 0x00,
  0x00, 0x07, 0x80, 0x00, 0xf3, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x03, 0xce, 0x00, 0x00, 0x07, 0x00,
  0x00, 0x73, 0x80, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xce, 0x00, 0x00, 0x07, 0x00, 0x00, 0x71, 0xc0,
  0x00, 0x01, 0xc0, 0x00, 0x01, 0xe7, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x79, 0xc0, 0x00, 0x01, 0xc0,
  0x00, 0x00, 0xe3, 0x80, 0x00, 0x0e, 0x00, 0x00, 0x38, 0xe0, 0x00, 0x03, 0x80, 0x00, 0x00, 0xf1,
  0xe0, 0x00, 0x1e, 0x00, 0x00, 0x1c, 0x78, 0x00, 0x07, 0x80, 0x00, 0x00, 0x78, 0xe0, 0x00, 0x3c,
  0x00, 0x00, 0x1e, 0x38, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x3c, 0x40, 0x00, 0x78, 0x00, 0x00, 0x0f,
  0x08, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x07, 0x80, 0x00, 0x3e,
  0x00, 0x00, 0x00, 0x1f, 0x80, 0x03, 0xe0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0xfc, 0x00, 0x00, 0x00,
  0x07, 0xe0, 0x1f, 0xc0, 0x00, 0x00, 0x01, 0xfc, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff,
  0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x3f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#define SAMPAD_WIDTH 64
#define SAMPAD_HEIGHT 64
static const unsigned char sampad[] PROGMEM = {
  0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff,
  0xff, 0xc0, 0xff, 0x80, 0x00, 0xff, 0x81, 0xff, 0xff, 0xc0, 0x03, 0xf8, 0x0f, 0xf0, 0x01, 0xff,
  0xff, 0xc0, 0x03, 0xf8, 0x0f, 0xe0, 0x03, 0xff, 0xff, 0xc0, 0x07, 0xf8, 0x0f, 0xf0, 0x03, 0xff,
  0xff, 0xe0, 0x0f, 0xf8, 0x0f, 0xf8, 0x03, 0xff, 0xff, 0xe0, 0x07, 0xf8, 0x0f, 0xf0, 0x03, 0xff,
  0xff, 0xe0, 0x03, 0xf8, 0x0f, 0xe0, 0x03, 0xff, 0xff, 0xe0, 0x01, 0xf8, 0x0f, 0xc0, 0x07, 0xff,
  0xff, 0xe0, 0x00, 0xf8, 0x0f, 0x80, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x78, 0x0f, 0x00, 0x07, 0xff,
  0xff, 0xf3, 0x00, 0x38, 0x0e, 0x00, 0x67, 0xff, 0xff, 0xf7, 0x80, 0x18, 0x0c, 0x00, 0xf7, 0xff,
  0xff, 0xff, 0xc0, 0x08, 0x08, 0x01, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xff,
  0xff, 0xff, 0xf0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x9f, 0xf8, 0x07, 0xf0, 0x0f, 0xf9, 0xff,
  0xff, 0x1f, 0xfc, 0x1e, 0x38, 0x1f, 0xf8, 0xff, 0xfc, 0x1f, 0xfe, 0x37, 0x7c, 0x3f, 0xf8, 0x3f,
  0xf8, 0x00, 0x00, 0x2e, 0x62, 0x7f, 0xf8, 0x1f, 0xf0, 0x00, 0x00, 0x56, 0x6a, 0x00, 0x00, 0x0f,
  0xc0, 0x00, 0x00, 0x56, 0x78, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x56, 0x75, 0x00, 0x00, 0x01,
  0x80, 0x00, 0x00, 0x56, 0x65, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x57, 0x6c, 0x00, 0x00, 0x03,
  0xf0, 0x00, 0x00, 0x5b, 0x4a, 0x00, 0x00, 0x07, 0xf8, 0x1f, 0xfe, 0x29, 0x5e, 0x00, 0x00, 0x1f,
  0xfe, 0x1f, 0xfc, 0x3c, 0x3c, 0x3f, 0xf8, 0x3f, 0xff, 0x1f, 0xf8, 0x1e, 0x38, 0x1f, 0xf8, 0xff,
  0xff, 0xdf, 0xf0, 0x07, 0xe0, 0x0f, 0xf9, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xff,
  0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 0x08, 0x00, 0x01, 0xff, 0xff,
  0xff, 0xf7, 0x00, 0x10, 0x08, 0x00, 0xf7, 0xff, 0xff, 0xe2, 0x00, 0x30, 0x0c, 0x00, 0x67, 0xff,
  0xff, 0xe0, 0x00, 0x70, 0x0e, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0xf0, 0x0f, 0x00, 0x07, 0xff,
  0xff, 0xe0, 0x01, 0xf0, 0x0f, 0x80, 0x07, 0xff, 0xff, 0xe0, 0x03, 0xf0, 0x0f, 0xc0, 0x07, 0xff,
  0xff, 0xe0, 0x07, 0xf0, 0x0f, 0xe0, 0x03, 0xff, 0xff, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0, 0x03, 0xff,
  0xff, 0xc0, 0x07, 0xf0, 0x0f, 0xf0, 0x03, 0xff, 0xff, 0xc0, 0x03, 0xf0, 0x0f, 0xe0, 0x03, 0xff,
  0xff, 0xc0, 0x0f, 0xf8, 0x0f, 0xc0, 0x03, 0xff, 0xff, 0xc1, 0xff, 0x80, 0x01, 0xff, 0x01, 0xff,
  0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};


#define WALKING_WIDTH 44
#define WALKING_HEIGHT 64
const unsigned char walking[][24*16] PROGMEM = {
  { 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f,
    0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00,
    0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x00,
    0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xff,
    0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00,
    0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0,
    0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x03,
    0xff, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xe7, 0xfe, 0x00, 0xc0,
    0x00, 0x1f, 0x87, 0xff, 0x01, 0xe0, 0x00, 0x1f, 0x0f, 0xff, 0x07, 0xe0, 0x00, 0x3e, 0x0f, 0xff,
    0x8f, 0xe0, 0x00, 0x3e, 0x0f, 0xff, 0xdf, 0xc0, 0x00, 0x7c, 0x0f, 0xff, 0xff, 0x00, 0x00, 0x78,
    0x0f, 0xfb, 0xfe, 0x00, 0x00, 0xf8, 0x0f, 0xf9, 0xfc, 0x00, 0x00, 0xf8, 0x0f, 0xf8, 0x70, 0x00,
    0x00, 0xf0, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x70, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0,
    0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00,
    0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00,
    0x00, 0x00, 0x7e, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0xf8, 0x1f, 0x80, 0x00, 0x00, 0x01, 0xf8, 0x0f, 0xc0, 0x00, 0x00, 0x03,
    0xf0, 0x07, 0xc0, 0x00, 0x00, 0x07, 0xe0, 0x07, 0xe0, 0x00, 0x00, 0x1f, 0xe0, 0x03, 0xe0, 0x00,
    0x01, 0xff, 0xc0, 0x03, 0xf0, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xf8, 0x00, 0x7f, 0xff, 0x00, 0x00,
    0xf8, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x7c, 0x00, 0x1c, 0x00,
    0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
  },
  { 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00,
    0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00,
    0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff,
    0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00,
    0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x01,
    0xff, 0xf8, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00,
    0x00, 0x0f, 0xcf, 0xf8, 0x00, 0x00, 0x00, 0x0f, 0x8f, 0xfc, 0x00, 0x00, 0x00, 0x1f, 0x0f, 0xfc,
    0x00, 0x00, 0x00, 0x1e, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x3e, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x3c,
    0x1f, 0xff, 0x06, 0x00, 0x00, 0x3c, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x3c, 0x1f, 0xff, 0xff, 0x00,
    0x00, 0x3c, 0x1f, 0xf7, 0xff, 0x00, 0x00, 0x3c, 0x1f, 0xe1, 0xfc, 0x00, 0x00, 0x3c, 0x3f, 0xe0,
    0x00, 0x00, 0x00, 0x3c, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x38, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00,
    0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00,
    0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7d, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xf8,
    0x00, 0x00, 0x00, 0x00, 0x7c, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x7c, 0x00, 0x00, 0x00, 0x00,
    0xf8, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x3e, 0x00, 0x00, 0x0c, 0x01, 0xf8, 0x3e, 0x00, 0x00,
    0x1f, 0x87, 0xf0, 0x1f, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x1f, 0x00, 0x00, 0x1f, 0xff, 0xe0, 0x1f,
    0x00, 0x00, 0x0f, 0xff, 0xc0, 0x1f, 0x00, 0x00, 0x03, 0xff, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x7c,
    0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  { 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00,
    0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00,
    0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xff,
    0xc0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x00, 0x00,
    0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00,
    0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00,
    0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0,
    0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07,
    0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xbf, 0xf0, 0x00, 0x00, 0x00, 0x07, 0xbf, 0xf0, 0x00, 0x00,
    0x00, 0x07, 0xbf, 0xf8, 0x00, 0x00, 0x00, 0x07, 0xbf, 0xfc, 0x00, 0x00, 0x00, 0x0f, 0xbf, 0xfe,
    0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0x80, 0x00, 0x00, 0x07, 0xff, 0xdf, 0xc0, 0x00, 0x00, 0x07,
    0xff, 0xcf, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xc3, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xc1, 0xc0, 0x00,
    0x00, 0x01, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0,
    0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00,
    0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00,
    0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x78, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x7c,
    0x00, 0x00, 0x00, 0x7f, 0xfe, 0x7c, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0xf8, 0x00, 0x00, 0x00, 0x3f,
    0xf0, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00,
    0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0,
    0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  { 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8,
    0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00,
    0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x00,
    0x00, 0x00, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x00, 0x00,
    0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0,
    0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x01,
    0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00,
    0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80,
    0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01,
    0xff, 0x80, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00,
    0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00,
    0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0,
    0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x01,
    0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  { 
    0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe,
    0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00,
    0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00,
    0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x0f, 0xff,
    0x80, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00,
    0x01, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0,
    0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00,
    0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00,
    0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0,
    0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x03,
    0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00,
    0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc,
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xbf, 0x00, 0x00, 0x00, 0x00,
    0xff, 0x8f, 0x00, 0x00, 0x00, 0x00, 0xff, 0x87, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0,
    0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00,
    0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3e, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xf0, 0x00, 0x00,
    0x00, 0x00, 0x7c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7d, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xf9, 0xf0,
    0x00, 0x00, 0x00, 0x00, 0xf9, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xfb, 0xe0, 0x00, 0x00, 0x00, 0x01,
    0xf3, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xf7, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xe7, 0xc0, 0x00, 0x00,
    0x00, 0x07, 0xe7, 0xc0, 0x00, 0x00, 0x00, 0x07, 0xc7, 0x80, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00,
    0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  { 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00,
    0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00,
    0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x0f, 0xff,
    0x80, 0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00,
    0x01, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0,
    0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00,
    0xff, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00,
    0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x07, 0xbf, 0xf0,
    0x00, 0x00, 0x00, 0x0f, 0xbf, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0x3f, 0xf0, 0x1c, 0x00, 0x00, 0x1f,
    0x3f, 0xf8, 0x7e, 0x00, 0x00, 0x1e, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x1e, 0x7f, 0xff, 0xfc, 0x00,
    0x00, 0x1e, 0x7f, 0xff, 0xf0, 0x00, 0x00, 0x3e, 0x7f, 0xdf, 0xc0, 0x00, 0x00, 0x3e, 0x7f, 0xc0,
    0x00, 0x00, 0x00, 0x3c, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x3c, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x3c,
    0x7f, 0x80, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00,
    0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xfb, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xf9, 0xfc,
    0x00, 0x00, 0x00, 0x00, 0xf8, 0xfc, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x7e, 0x00, 0x00, 0x00, 0x01,
    0xf0, 0x3f, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x3f, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x1f, 0x00, 0x00,
    0x00, 0x07, 0xe0, 0x0f, 0x80, 0x00, 0x00, 0x07, 0xe0, 0x0f, 0x80, 0x00, 0x00, 0x0f, 0xc0, 0x07,
    0xc0, 0x00, 0x00, 0x1f, 0x80, 0x07, 0xc0, 0x00, 0x00, 0x3f, 0x80, 0x07, 0xc0, 0x00, 0x00, 0x7f,
    0x00, 0x03, 0xe0, 0x00, 0x00, 0xfe, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xfc, 0x00, 0x03, 0xe0, 0x00,
    0x07, 0xf8, 0x00, 0x03, 0xe0, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xe0, 0x00, 0x0f, 0xc0, 0x00, 0x03,
    0xe0, 0x00, 0x07, 0x80, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  { 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00,
    0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00,
    0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff,
    0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00,
    0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0,
    0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x03,
    0xff, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x0f, 0xcf, 0xfe, 0x01, 0x80,
    0x00, 0x1f, 0x8f, 0xfe, 0x03, 0xc0, 0x00, 0x3f, 0x0f, 0xff, 0x07, 0xc0, 0x00, 0x3e, 0x0f, 0xff,
    0x0f, 0xc0, 0x00, 0x7c, 0x0f, 0xff, 0xff, 0x80, 0x00, 0x78, 0x0f, 0xff, 0xff, 0x00, 0x00, 0xf8,
    0x1f, 0xf3, 0xfe, 0x00, 0x00, 0xf0, 0x1f, 0xf1, 0xf8, 0x00, 0x00, 0xf0, 0x1f, 0xf0, 0xe0, 0x00,
    0x00, 0xf0, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0,
    0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00,
    0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00,
    0x00, 0x00, 0x7c, 0xfe, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x7e, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x3f,
    0x00, 0x00, 0x00, 0x01, 0xf8, 0x1f, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x1f, 0x80, 0x00, 0x00, 0x07,
    0xf0, 0x0f, 0xc0, 0x00, 0x00, 0x07, 0xe0, 0x07, 0xc0, 0x00, 0x00, 0x1f, 0xc0, 0x07, 0xe0, 0x00,
    0x03, 0xff, 0x80, 0x03, 0xf0, 0x00, 0x7f, 0xff, 0x00, 0x01, 0xf0, 0x00, 0x7f, 0xfe, 0x00, 0x01,
    0xf8, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0xf8, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0xfc, 0x00, 0x3c, 0x00,
    0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  }
};