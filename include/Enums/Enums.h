#ifndef ARTRIS_SCREEN_ENUMS_H_
#define ARTRIS_SCREEN_ENUMS_H_

#include <stdint.h>

namespace artris {

enum class BlockType: uint8_t {
    I,
    J,
    L,
    O,
    S,
    T,
    Z
};

enum class BlockState: uint8_t {
    SETTING,
    RIGHT,
    DOWN,
    LEFT
};

enum class ThrButtonType: uint8_t {
    LEFT,
    RIGHT,
    DOWN,
    OTHER
};

enum class TextAllignType: uint8_t {
    NONE,
    LEFT,
    CENTER,
    RIGHT
};

}

#endif