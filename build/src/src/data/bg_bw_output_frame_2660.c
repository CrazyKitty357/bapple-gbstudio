#pragma bank 255

// Background: bw_output_frame_2660

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2660_tileset.h"
#include "data/bg_bw_output_frame_2660_tilemap.h"

BANKREF(bg_bw_output_frame_2660)

const struct background_t bg_bw_output_frame_2660 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_2660_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_2660_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
