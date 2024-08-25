#pragma bank 255

// Scene: Generated Scene 2711

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2711.h"
#include "data/generated_scene_2711_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_actor_animated.h"
#include "data/generated_scene_2711_init.h"

BANKREF(generated_scene_2711)

const struct scene_t generated_scene_2711 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_LOGO,
    .background = TO_FAR_PTR_T(bg_bw_output_frame_2711),
    .collisions = TO_FAR_PTR_T(generated_scene_2711_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_actor_animated),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(generated_scene_2711_init)
};
