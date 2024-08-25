#pragma bank 255

// Background: bw_output_frame_4464

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4464_tileset.h"
#include "data/bg_bw_output_frame_4464_tilemap.h"

BANKREF(bg_bw_output_frame_4464)

const struct background_t bg_bw_output_frame_4464 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4464_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4464_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
