#pragma bank 255

// Background: bw_output_frame_0575

#include "gbs_types.h"
#include "data/bg_bw_output_frame_0575_tileset.h"
#include "data/bg_bw_output_frame_0575_tilemap.h"

BANKREF(bg_bw_output_frame_0575)

const struct background_t bg_bw_output_frame_0575 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_0575_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_0575_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
