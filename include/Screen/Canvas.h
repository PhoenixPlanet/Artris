#ifndef ARTRIS_SCREEN_CANVAS_H_
#define ARTRIS_SCREEN_CANVAS_H_

#include <stdint.h>

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

namespace artris {

class Canvas : public Adafruit_SSD1306 {
public:
    Canvas();
    ~Canvas();

    void setTextColor(uint16_t color);

private:
    const uint8_t WIDTH;
    const uint8_t HEIGHT;
    
    bool is_background_white_;
    
};

}

#endif