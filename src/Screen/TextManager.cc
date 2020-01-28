#include <Screen/Canvas.h>
#include <Screen/TextManager.h>

namespace artris {

TextManager::TextManager(Canvas* canvas) : TextManager(canvas, 1) {  }

TextManager::TextManager(Canvas* canvas, uint8_t text_size) : canvas_(canvas), 
                        text_size_(text_size), cursor_({0, 0}) {  }

TextManager::~TextManager() {  }

void TextManager::println(const char* str, uint8_t text_size, uint8_t color=INVERSE, 
                uint8_t line=0, TextAllignType allignment = TextAllignType::NONE) {
    this->setTextSize(text_size);
    canvas_->setCursor(2, (8*text_size) * (line - 1));
    canvas_.setTextColor(color);
    canvas_.println(str);
}

}