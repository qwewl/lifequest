#pragma bank 255

// Scene: House kitchen
// Triggers

#include "gbs_types.h"
#include "data/trigger_43_interact.h"
#include "data/trigger_44_interact.h"
#include "data/trigger_16_interact.h"

BANKREF(scene_8_triggers)

const struct trigger_t scene_8_triggers[] = {
    {
        // Trigger 1,
        .x = 19,
        .y = 10,
        .width = 1,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_43_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_44_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 15,
        .y = 2,
        .width = 2,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_16_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
