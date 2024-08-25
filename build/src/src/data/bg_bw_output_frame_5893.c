#pragma bank 255

// Background: bw_output_frame_5893

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5893_tileset.h"
#include "data/bg_bw_output_frame_5893_tilemap.h"

BANKREF(bg_bw_output_frame_5893)

const struct background_t bg_bw_output_frame_5893 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5893_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5893_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
