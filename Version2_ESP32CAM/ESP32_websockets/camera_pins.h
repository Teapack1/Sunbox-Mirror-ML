//I2C
#define I2C_SDA 14 // SDA Connected to GPIO 14
#define I2C_SCL 15 // SCL Connected to GPIO 15

//Pins
#define LEDC_CHANNEL_0     LEDC_CHANNEL_0
#define LEDC_CHANNEL_1     LEDC_CHANNEL_1
#define LEDC_TIMER_13_BIT  13
#define LEDC_BASE_FREQ     5000
#define warmPin 2
#define coldPin 4
#define button 12

// TCS LED light
#define TCS34725_LED_PIN 13
    
//Camera
#define PWDN_GPIO_NUM     32
#define RESET_GPIO_NUM    -1
#define XCLK_GPIO_NUM      0
#define SIOD_GPIO_NUM     26
#define SIOC_GPIO_NUM     27

#define Y9_GPIO_NUM       35
#define Y8_GPIO_NUM       34
#define Y7_GPIO_NUM       39
#define Y6_GPIO_NUM       36
#define Y5_GPIO_NUM       21
#define Y4_GPIO_NUM       19
#define Y3_GPIO_NUM       18
#define Y2_GPIO_NUM        5
#define VSYNC_GPIO_NUM    25
#define HREF_GPIO_NUM     23
#define PCLK_GPIO_NUM     22


// Display
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

#define NUMFLAKES     10 // Number of snowflakes in the animation example

#define LOGO_HEIGHT   16
#define LOGO_WIDTH    16

/* girl:
static const unsigned char PROGMEM logo_bmp[] =
{   0xff, 0xfe, 0x1f, 0xff, 0x85, 0xc9, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x01, 0x7f, 
 0xff, 0xfe, 0x0f, 0xfc, 0x3f, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0xfe, 0x01, 0x81, 0xff, 0xff, 0xc0, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0xfc, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x38, 0x00, 0x0f, 0xff, 0xff, 0xfc, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0x20, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x03, 0xff, 
  0xfe, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0xff, 
  0xfe, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0xff, 
  0xfe, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0xff, 
  0xfe, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 
  0xfe, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x03, 0xe0, 0x07, 0xff, 
  0xfe, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x1f, 0xc0, 0x03, 0xff, 
  0xfe, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x7f, 0xc0, 0x03, 0xff, 
  0xfe, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0xff, 0xc0, 0x03, 0xff, 
  0xfe, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x01, 0xff, 0xc0, 0x07, 0xff, 
  0xfe, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x07, 0xff, 0xc0, 0x0f, 0xff, 
  0xfe, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x7f, 
  0xfe, 0x70, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x7f, 
  0xfe, 0x40, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x7f, 0xf7, 0xff, 0xf8, 0x7f, 
  0xfe, 0xc0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xe7, 0xe3, 0xff, 0xf0, 0x7f, 
  0xfe, 0xc0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x01, 0xe3, 0xe1, 0xff, 0x80, 0x7f, 
  0xfe, 0x80, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0xf8, 0x80, 0x9c, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x80, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0x80, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x0c, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x80, 0x00, 0x3e, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf9, 0xff, 0xff, 0xff, 0x87, 0xc0, 0x7f, 0xfe, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x03, 0xff, 0xff, 0xff, 0x07, 0xc0, 0x7f, 0xfe, 0x00, 0x7f, 
  0xfe, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xff, 0xfe, 0x0f, 0xc0, 0x7f, 0xfe, 0x00, 0x7f, 
  0xfe, 0x00, 0x07, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xc0, 0x7f, 0xff, 0x00, 0x7f, 
  0xfe, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x03, 0xc0, 0x7f, 0xff, 0x80, 0x7f, 
  0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x03, 0xe0, 0x7f, 0xff, 0xc0, 0x7f, 
  0xfe, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x01, 0xe0, 0xff, 0xff, 0xc0, 0x7f, 
  0xfe, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x61, 0xff, 0xff, 0xe0, 0x7f, 
  0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x23, 0xff, 0xff, 0xf0, 0x7f, 
  0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x7f, 
  0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x7f, 
  0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf8, 0x7f, 
  0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x10, 0x3f, 0xf0, 0x7f, 
  0xfe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xff, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xff, 0xc1, 0x23, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xff, 0xe0, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xff, 0xe0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xff, 0xf0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xff, 0xf8, 0x0f, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xff, 0xfc, 0x03, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xff, 0xfe, 0x00, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xfe, 0xff, 0x00, 0x1f, 0xf0, 0x18, 0x7f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x7f, 
  0xfe, 0xff, 0x80, 0x00, 0x01, 0xfe, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x40, 0x1f, 0x3f, 0x81, 0x7f, 
  0xfe, 0xff, 0xe0, 0x00, 0x0f, 0xff, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x71, 0x8f, 0xff, 0x81, 0x7f, 
  0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xfc, 0x08, 0x01, 0xff, 0xe3, 0xff, 0x91, 0x7f, 
  0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xfe, 0x18, 0x87, 0xff, 0xff, 0xff, 0x81, 0x7f, 
  0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xfe, 0x3e, 0xcf, 0xff, 0xff, 0xff, 0xff, 0x7f, 
  0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0x7f
  };
  */

  static const unsigned char PROGMEM logo_bmp[] =
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x9a, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0x36, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x6c, 0x80, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0c, 0xdb, 0x80, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x19, 0xb7, 0x60, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x33, 0x66, 0xf0, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x26, 0xdd, 0xf8, 0x00, 0x00, 0x6f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0d, 0x9b, 0xb4, 0x00, 0x00, 0x77, 0xef, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x37, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0xee, 0xdf, 0x00, 0x00, 0xfd, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0xdf, 0xbf, 0x80, 0x03, 0x7f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xbf, 0xff, 0xc0, 0x0b, 0xbf, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x76, 0xff, 0xe0, 0x0d, 0xdf, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x16, 0x6f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xf8, 0x1b, 0x77, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0xff, 0xfc, 0x4d, 0x9b, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xfe, 0x6e, 0xdd, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xdb, 0xfe, 0x22, 0x4c, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0f, 0xff, 0x3d, 0xe7, 0xbf, 0xcf, 0xf7, 0x1c, 0x1f, 0x7c, 0xef, 0xfb, 0xfc, 0x7f, 0x3f, 0xc0, 
  0x1f, 0xff, 0x3d, 0xe7, 0xbf, 0xdf, 0xf7, 0x9c, 0x3f, 0x7e, 0xef, 0xfb, 0xfe, 0xff, 0xbf, 0xe0, 
  0x1e, 0x0f, 0x3d, 0xf7, 0xb9, 0xde, 0xfb, 0xb8, 0x3f, 0x7e, 0xef, 0x3b, 0xde, 0xf7, 0xbd, 0xe0, 
  0x1f, 0x0f, 0x3d, 0xff, 0xb9, 0xde, 0x7b, 0xf8, 0x3f, 0x7e, 0xef, 0x3b, 0xde, 0xf7, 0xfc, 0xe0, 
  0x0f, 0xcf, 0x3d, 0xff, 0xbf, 0xde, 0x79, 0xf8, 0x3b, 0x7e, 0xef, 0xfb, 0xff, 0xe3, 0xff, 0xe0, 
  0x07, 0xef, 0x3d, 0xff, 0xbf, 0xde, 0x79, 0xf8, 0x3b, 0x7e, 0xef, 0xf3, 0xfd, 0xe3, 0xff, 0xc0, 
  0x03, 0xff, 0x3d, 0xdf, 0xb9, 0xde, 0x7b, 0xf8, 0x3b, 0xee, 0xef, 0xfb, 0xff, 0xe3, 0xff, 0xc0, 
  0x00, 0x7f, 0x3d, 0xdf, 0xb9, 0xfe, 0x7b, 0xb8, 0x3b, 0xee, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xe0, 
  0x0f, 0xf7, 0xfd, 0xcf, 0xbf, 0xff, 0xf7, 0x9c, 0x3b, 0xee, 0xef, 0x3b, 0xde, 0xff, 0xbd, 0xe0, 
  0x1f, 0xf7, 0xf9, 0xcf, 0xbf, 0xcf, 0xf7, 0x1e, 0x38, 0x0e, 0xef, 0x3f, 0xce, 0xff, 0xbc, 0xe0, 
  0x07, 0xc1, 0xf1, 0xc7, 0x3f, 0x83, 0xc7, 0x0e, 0x38, 0x0e, 0xe7, 0x3b, 0x8e, 0x3e, 0x18, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x09, 0xc0, 0x48, 0x00, 0x80, 0x00, 0x12, 0x00, 0x38, 0x00, 0x03, 0x00, 0x30, 0x01, 0x20, 0x30, 
  0x01, 0xcc, 0xc9, 0xcc, 0xd3, 0x9c, 0x33, 0x98, 0x33, 0x9c, 0x03, 0xb9, 0xb3, 0xbb, 0x37, 0x00, 
  0x01, 0xcc, 0xc9, 0xd8, 0x93, 0x9c, 0x12, 0x98, 0x1b, 0x94, 0x03, 0x39, 0x33, 0xb1, 0x33, 0x00, 
  0x01, 0x4c, 0x49, 0x8c, 0x80, 0x9c, 0x12, 0x98, 0x39, 0x94, 0x82, 0x39, 0x03, 0x11, 0x12, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  };

  
