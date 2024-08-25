#pragma bank 255

// Background: bw_output_frame_0798

#include "gbs_types.h"
#include "data/bg_bw_output_frame_0798_tileset.h"
#include "data/bg_bw_output_frame_0798_tilemap.h"

BANKREF(bg_bw_output_frame_0798)

const struct background_t bg_bw_output_frame_0798 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_0798_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_0798_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
