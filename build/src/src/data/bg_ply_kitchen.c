#pragma bank 255

// Background: ply_kitchen

#include "gbs_types.h"
#include "data/bg_ply_kitchen_tileset.h"
#include "data/bg_ply_kitchen_tilemap.h"
#include "data/bg_logo_tilemap_attr.h"

BANKREF(bg_ply_kitchen)

const struct background_t bg_ply_kitchen = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_ply_kitchen_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_ply_kitchen_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_logo_tilemap_attr)
};
