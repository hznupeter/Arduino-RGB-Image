
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

#define SCK 52
#define SDA 51
#define A0 46
#define RESET 49
#define CS 53

Adafruit_ST7735 tft = Adafruit_ST7735(CS, A0,SDA,SCK,RESET);


extern const uint16_t PROGMEM pic[12560];

#define BLACK 0x0000
#define WHITE 0xFFFF
#define RED   0xF800
#define BLUE  0x001F

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    tft.initR(INITR_BLACKTAB);
    
    tft.fillScreen(WHITE);
    //tft.drawRGBBitmap(10, 10, t030rs, 45, 37);
    tft.setRotation(1);
}

void loop() 
{
    
    tft.drawRGBBitmap(0, 0, pic, 160, 128);
    delay(500);

}
