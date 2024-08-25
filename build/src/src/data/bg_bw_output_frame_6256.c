#pragma bank 255

// Background: bw_output_frame_6256

#include "gbs_types.h"
#include "data/bg_bw_output_frame_6256_tileset.h"
#include "data/bg_bw_output_frame_6256_tilemap.h"

BANKREF(bg_bw_output_frame_6256)

const struct background_t bg_bw_output_frame_6256 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_6256_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_6256_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
