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
