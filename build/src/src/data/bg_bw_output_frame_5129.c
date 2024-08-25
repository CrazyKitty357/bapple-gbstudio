#pragma bank 255

// Background: bw_output_frame_5129

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5129_tileset.h"
#include "data/bg_bw_output_frame_5129_tilemap.h"

BANKREF(bg_bw_output_frame_5129)

const struct background_t bg_bw_output_frame_5129 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5129_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5129_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
