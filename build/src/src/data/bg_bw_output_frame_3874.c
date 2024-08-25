#pragma bank 255

// Background: bw_output_frame_3874

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3874_tileset.h"
#include "data/bg_bw_output_frame_3874_tilemap.h"

BANKREF(bg_bw_output_frame_3874)

const struct background_t bg_bw_output_frame_3874 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3874_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3874_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
