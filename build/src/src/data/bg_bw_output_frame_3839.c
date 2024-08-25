#pragma bank 255

// Background: bw_output_frame_3839

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3839_tileset.h"
#include "data/bg_bw_output_frame_3839_tilemap.h"

BANKREF(bg_bw_output_frame_3839)

const struct background_t bg_bw_output_frame_3839 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3839_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3839_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
