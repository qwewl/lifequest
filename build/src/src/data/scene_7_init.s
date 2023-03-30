.module scene_7_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -1

___bank_scene_7_init = 255
.globl ___bank_scene_7_init

_scene_7_init::
        VM_LOCK

        VM_RESERVE              1

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Overlay Move To
        VM_OVERLAY_MOVE_TO      0, 18, 1
        VM_OVERLAY_WAIT         .UI_MODAL, .UI_WAIT_WINDOW

        ; Stop Script
        VM_STOP
