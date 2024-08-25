#pragma bank 255

// Background: bw_output_frame_5616

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5616_tileset.h"
#include "data/bg_bw_output_frame_5616_tilemap.h"

BANKREF(bg_bw_output_frame_5616)

const struct background_t bg_bw_output_frame_5616 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5616_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5616_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
