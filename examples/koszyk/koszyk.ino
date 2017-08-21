#include <SPI.h>
#include <Adafruit_GFX.h>
#include <TFT_ILI9163C.h>


#define __CS 10
#define __DC 9

TFT_ILI9163C tft = TFT_ILI9163C(__CS, __DC);

const byte PROGMEM * const koszyk = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04
    ,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0x21,0x04
    ,0x21,0x04,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04
    ,0x21,0x04,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04
    ,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04
    ,0x00,0x00,0x00,0x00,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x21,0x04,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0x21,0x04,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x21,0x04,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0x21,0x04,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0xaa,0xa0,0xaa,0xa0,0x21,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x21,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    };

void setup() {
    tft.begin();
    tft.Image(0, 0, 32, 32, koszyk);
}

void loop() {

}