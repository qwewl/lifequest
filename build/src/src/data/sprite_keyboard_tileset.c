#pragma bank 255

// Tileset: sprite_keyboard_tileset

#include "gbs_types.h"

BANKREF(sprite_keyboard_tileset)

const struct tileset_t sprite_keyboard_tileset = {
    .n_tiles = 8,
    .tiles = {
        0xFE, 0xFE, 0x01, 0xFF, 0x5D, 0xFF, 0x55, 0xFF, 0x5D, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x29,
        0xFF, 0x29, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFD, 0xFF, 0x0F, 0x0F, 0x07, 0x07,
        0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xDD, 0x77, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x95,
        0xFF, 0x95, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
        0xFF, 0xFF, 0x00, 0xFF, 0xAD, 0xFF, 0x81, 0xFF, 0xAD, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x52,
        0xFF, 0x52, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
        0x7F, 0x7F, 0x80, 0xFF, 0xB7, 0xFF, 0xB7, 0xFC, 0xB7, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xA9,
        0xFF, 0xA9, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xBF, 0xFF, 0xF8, 0xF8, 0xE0, 0xE0
    }
};
