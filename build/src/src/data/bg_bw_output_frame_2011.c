#pragma bank 255

// Background: bw_output_frame_2011

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2011_tileset.h"
#include "data/bg_bw_output_frame_2011_tilemap.h"

BANKREF(bg_bw_output_frame_2011)

const struct background_t bg_bw_output_frame_2011 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_2011_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_2011_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
