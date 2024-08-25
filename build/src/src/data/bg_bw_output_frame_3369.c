#pragma bank 255

// Background: bw_output_frame_3369

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3369_tileset.h"
#include "data/bg_bw_output_frame_3369_tilemap.h"

BANKREF(bg_bw_output_frame_3369)

const struct background_t bg_bw_output_frame_3369 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3369_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3369_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
