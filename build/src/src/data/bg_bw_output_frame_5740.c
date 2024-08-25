#pragma bank 255

// Background: bw_output_frame_5740

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5740_tileset.h"
#include "data/bg_bw_output_frame_5740_tilemap.h"

BANKREF(bg_bw_output_frame_5740)

const struct background_t bg_bw_output_frame_5740 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5740_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5740_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
