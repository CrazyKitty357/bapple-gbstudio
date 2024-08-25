#pragma bank 255

// Background: bw_output_frame_4993

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4993_tileset.h"
#include "data/bg_bw_output_frame_4993_tilemap.h"

BANKREF(bg_bw_output_frame_4993)

const struct background_t bg_bw_output_frame_4993 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4993_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4993_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
