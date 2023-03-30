.module trigger_0_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_trigger_0_interact = 255
.globl ___bank_trigger_0_interact

_trigger_0_interact::
        VM_LOCK

        VM_RESERVE              4

        ; Load Scene
        ; Stop Script
        VM_STOP
