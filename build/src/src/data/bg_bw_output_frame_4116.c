#pragma bank 255

// Background: bw_output_frame_4116

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4116_tileset.h"
#include "data/bg_bw_output_frame_4116_tilemap.h"

BANKREF(bg_bw_output_frame_4116)

const struct background_t bg_bw_output_frame_4116 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4116_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4116_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
