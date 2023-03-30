#pragma bank 255

// Scene: Scene 7
// Triggers

#include "gbs_types.h"
#include "data/trigger_17_interact.h"
#include "data/trigger_14_interact.h"
#include "data/trigger_18_interact.h"

BANKREF(scene_7_triggers)

const struct trigger_t scene_7_triggers[] = {
    {
        // Trigger 1,
        .x = 9,
        .y = 16,
        .width = 2,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_17_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 11,
        .y = 4,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_14_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 10,
        .y = 4,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_18_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
