.module generated_scene_6572_init

.include "vm.i"
.include "data/game_globals.i"

.globl _fade_frames_per_step

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_generated_scene_6572_init = 255
.globl ___bank_generated_scene_6572_init

_generated_scene_6572_init::
        VM_LOCK

        VM_RESERVE              4

        ; Wait 1 Frames
        VM_IDLE

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Load Scene
        ; Stop Script
        VM_STOP
