#pragma bank 255

// Background: bw_output_frame_0470

#include "gbs_types.h"
#include "data/bg_bw_output_frame_0470_tileset.h"
#include "data/bg_bw_output_frame_0470_tilemap.h"

BANKREF(bg_bw_output_frame_0470)

const struct background_t bg_bw_output_frame_0470 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_0470_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_0470_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
