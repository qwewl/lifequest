#pragma bank 255

// Scene: House kitchen

#include "gbs_types.h"
#include "data/bg_ply_kitchen.h"
#include "data/scene_8_collisions.h"
#include "data/palette_1.h"
#include "data/palette_4.h"
#include "data/sprite_player.h"
#include "data/scene_8_triggers.h"
#include "data/scene_8_init.h"

BANKREF(scene_8)

const struct scene_t scene_8 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_ply_kitchen),
    .collisions = TO_FAR_PTR_T(scene_8_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_1),
    .sprite_palette = TO_FAR_PTR_T(palette_4),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_player),
    .n_actors = 0,
    .n_triggers = 3,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_8_triggers),
    .script_init = TO_FAR_PTR_T(scene_8_init)
};
