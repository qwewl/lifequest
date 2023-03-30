#pragma bank 255

// Scene: Scene 7

#include "gbs_types.h"
#include "data/bg_house_wide.h"
#include "data/scene_7_collisions.h"
#include "data/palette_1.h"
#include "data/palette_4.h"
#include "data/sprite_player.h"
#include "data/scene_7_triggers.h"
#include "data/scene_7_init.h"

BANKREF(scene_7)

const struct scene_t scene_7 = {
    .width = 32,
    .height = 18,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_house_wide),
    .collisions = TO_FAR_PTR_T(scene_7_collisions),
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
    .triggers = TO_FAR_PTR_T(scene_7_triggers),
    .script_init = TO_FAR_PTR_T(scene_7_init)
};
