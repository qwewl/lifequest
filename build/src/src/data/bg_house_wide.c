#pragma bank 255

// Background: house-wide

#include "gbs_types.h"
#include "data/bg_house_wide_tileset.h"
#include "data/bg_house_wide_tilemap.h"
#include "data/bg_house_wide_tilemap_attr.h"

BANKREF(bg_house_wide)

const struct background_t bg_house_wide = {
    .width = 32,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_house_wide_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_house_wide_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_house_wide_tilemap_attr)
};
