#pragma bank 255

// Background: bw_output_frame_3985

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3985_tileset.h"
#include "data/bg_bw_output_frame_3985_tilemap.h"

BANKREF(bg_bw_output_frame_3985)

const struct background_t bg_bw_output_frame_3985 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3985_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3985_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
