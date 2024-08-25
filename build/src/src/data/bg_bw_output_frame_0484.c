#pragma bank 255

// Background: bw_output_frame_0484

#include "gbs_types.h"
#include "data/bg_bw_output_frame_0484_tileset.h"
#include "data/bg_bw_output_frame_0484_tilemap.h"

BANKREF(bg_bw_output_frame_0484)

const struct background_t bg_bw_output_frame_0484 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_0484_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_0484_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
