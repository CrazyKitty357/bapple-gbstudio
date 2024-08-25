#pragma bank 255

// Background: bw_output_frame_1647

#include "gbs_types.h"
#include "data/bg_bw_output_frame_1647_tileset.h"
#include "data/bg_bw_output_frame_1647_tilemap.h"

BANKREF(bg_bw_output_frame_1647)

const struct background_t bg_bw_output_frame_1647 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_1647_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_1647_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
