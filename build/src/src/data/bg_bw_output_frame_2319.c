#pragma bank 255

// Background: bw_output_frame_2319

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2319_tileset.h"
#include "data/bg_bw_output_frame_2319_tilemap.h"

BANKREF(bg_bw_output_frame_2319)

const struct background_t bg_bw_output_frame_2319 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_2319_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_2319_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
