#pragma bank 255

// Background: bw_output_frame_6034

#include "gbs_types.h"
#include "data/bg_bw_output_frame_6034_tileset.h"
#include "data/bg_bw_output_frame_6034_tilemap.h"

BANKREF(bg_bw_output_frame_6034)

const struct background_t bg_bw_output_frame_6034 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_6034_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_6034_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
