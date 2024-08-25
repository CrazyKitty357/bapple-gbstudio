#pragma bank 255

// Background: bw_output_frame_2603

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2603_tileset.h"
#include "data/bg_bw_output_frame_2603_tilemap.h"

BANKREF(bg_bw_output_frame_2603)

const struct background_t bg_bw_output_frame_2603 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_2603_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_2603_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
