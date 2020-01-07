#ifndef ARTRIS_SCREEN_TEXTMANAGER_H_
#define ARTRIS_SCREEN_TEXTMANAGER_H_

#include <stdint.h>

#include <Enums/Enums.h>
#include <Screen/Canvas.h>

namespace artris {

struct Cursor
{
    int16_t x;
    int16_t y;
};


class TextManager {
public:
    TextManager(const Canvas* canvas);
    TextManager(const Canvas* canvas, uint8_t text_size);

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
    uint8_t text_size_();

private:
    const Canvas* CANVAS;

    uint8_t text_size_;
    Cursor cursor_;
};

}

#endif