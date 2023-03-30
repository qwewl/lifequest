.module trigger_18_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_TMP0_CAMERA_MOVE_ARGS = -2

___bank_trigger_18_interact = 255
.globl ___bank_trigger_18_interact

_trigger_18_interact::
        VM_LOCK

        VM_RESERVE              2

        ; Camera Move To
        VM_SET_CONST            .LOCAL_TMP0_CAMERA_MOVE_ARGS, 88
        VM_SET_CONST            ^/(.LOCAL_TMP0_CAMERA_MOVE_ARGS + 1)/, 72
        VM_CAMERA_MOVE_TO       .LOCAL_TMP0_CAMERA_MOVE_ARGS, 1, .CAMERA_UNLOCK

        ; Stop Script
        VM_STOP
