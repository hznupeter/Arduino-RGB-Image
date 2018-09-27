# Arduino RGB Image

Displays a 16-bit RGB image on a ST7735 using an Arduino by storing it as an array of hexadecimal values in PROGMEM.

You can convert bitmap images to C hex arrays using something like this,
https://littlevgl.com/image-to-c-array

Pinout that worked for me:

SCK 52

SDA 51

A0(DC) 46

RESET 49

CS 53

TX3 - RX3
