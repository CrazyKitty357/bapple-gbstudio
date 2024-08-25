#pragma bank 255

// Background: bw_output_frame_2648

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2648_tileset.h"
#include "data/bg_bw_output_frame_2648_tilemap.h"

BANKREF(bg_bw_output_frame_2648)

const struct background_t bg_bw_output_frame_2648 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_2648_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_2648_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
