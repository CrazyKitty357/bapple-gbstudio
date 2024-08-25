#pragma bank 255

// Background: bw_output_frame_1973

#include "gbs_types.h"
#include "data/bg_bw_output_frame_1973_tileset.h"
#include "data/bg_bw_output_frame_1973_tilemap.h"

BANKREF(bg_bw_output_frame_1973)

const struct background_t bg_bw_output_frame_1973 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_1973_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_1973_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
