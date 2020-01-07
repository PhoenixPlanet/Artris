#include <Screen/Canvas.h>
#include <Screen/TextManager.h>

namespace artris {

TextManager::TextManager(const Canvas* canvas) : TextManager(canvas, 1) {  }

TextManager::TextManager(const Canvas* canvas, uint8_t text_size) : CANVAS(canvas), 
                        text_size_(text_size), cursor_({0, 0}) {  }

TextManager::~TextManager() {  }

}