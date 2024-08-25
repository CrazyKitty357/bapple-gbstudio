#pragma bank 255

// Background: bw_output_frame_3352

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3352_tileset.h"
#include "data/bg_bw_output_frame_3352_tilemap.h"

BANKREF(bg_bw_output_frame_3352)

const struct background_t bg_bw_output_frame_3352 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3352_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3352_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
