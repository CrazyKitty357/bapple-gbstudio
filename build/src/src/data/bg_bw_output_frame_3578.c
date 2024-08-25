#pragma bank 255

// Background: bw_output_frame_3578

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3578_tileset.h"
#include "data/bg_bw_output_frame_3578_tilemap.h"

BANKREF(bg_bw_output_frame_3578)

const struct background_t bg_bw_output_frame_3578 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3578_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3578_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
