#pragma bank 255

// Background: bw_output_frame_4135

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4135_tileset.h"
#include "data/bg_bw_output_frame_4135_tilemap.h"

BANKREF(bg_bw_output_frame_4135)

const struct background_t bg_bw_output_frame_4135 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4135_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4135_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
