#pragma bank 255

// Background: bw_output_frame_0700

#include "gbs_types.h"
#include "data/bg_bw_output_frame_0700_tileset.h"
#include "data/bg_bw_output_frame_0700_tilemap.h"

BANKREF(bg_bw_output_frame_0700)

const struct background_t bg_bw_output_frame_0700 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_0700_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_0700_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
