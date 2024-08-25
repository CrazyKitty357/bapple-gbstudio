#pragma bank 255

// Background: bw_output_frame_0253

#include "gbs_types.h"
#include "data/bg_bw_output_frame_0253_tileset.h"
#include "data/bg_bw_output_frame_0253_tilemap.h"

BANKREF(bg_bw_output_frame_0253)

const struct background_t bg_bw_output_frame_0253 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_0253_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_0253_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
