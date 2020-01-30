#ifndef ARTRIS_SCREEN_TEXTMANAGER_H_
#define ARTRIS_SCREEN_TEXTMANAGER_H_

#include <stdint.h>

#include <ArduinoSTL.h>

#include <Enums/Enums.h>
#include <Screen/Canvas.h>

namespace artris {

struct Point2D
{
    int16_t x;
    int16_t y;
};


class TextManager {
public:
    TextManager(Canvas* canvas);
    TextManager(Canvas* canvas, uint8_t text_size);

    ~TextManager();

    void println(const char* str, uint8_t text_size, uint8_t color=INVERSE, 
                uint8_t line=0, TextAllignType allignment = TextAllignType::NONE);
    void println(const char* str, uint8_t color=INVERSE, uint8_t line=0, 
                TextAllignType allignment = TextAllignType::NONE);
    void print(const char* str, uint8_t text_size, uint8_t color=INVERSE, 
                uint8_t line=0, TextAllignType allignment = TextAllignType::NONE);
    void print(const char* str, uint8_t color=INVERSE, uint8_t line=0, 
                TextAllignType allignment = TextAllignType::NONE);

    void print(int n, uint8_t text_size, uint8_t color=INVERSE);
    void print(int n, uint8_t color=INVERSE);
    void print(char c, uint8_t text_size, uint8_t color=INVERSE);
    void print(char c, uint8_t color=INVERSE);

    void setTextSize(uint8_t text_size);
    uint8_t getTextSize();

private:
    static constexpr uint8_t kMinTextSizeX = 6;
    static constexpr uint8_t kMinTextSizeY = 8;

    Canvas* canvas_;

    uint8_t text_size_;
    uint16_t line_;
    std::vector<uint16_t> line_base_y_;

    Point2D cursor_;

    void reallignLineBaseY(uint16_t target_line, uint16_t new_line_size_y);
};

}

#endif