#ifndef ARTRIS_SCREEN_CANVAS_H_
#define ARTRIS_SCREEN_CANVAS_H_

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class Screen {
private:
    Adafruit_SSD1306 *display_;
};

#endif