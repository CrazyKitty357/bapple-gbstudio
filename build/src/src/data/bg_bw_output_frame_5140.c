#pragma bank 255

// Background: bw_output_frame_5140

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5140_tileset.h"
#include "data/bg_bw_output_frame_5140_tilemap.h"

BANKREF(bg_bw_output_frame_5140)

const struct background_t bg_bw_output_frame_5140 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5140_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5140_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
