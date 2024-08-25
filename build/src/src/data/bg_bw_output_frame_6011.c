#pragma bank 255

// Background: bw_output_frame_6011

#include "gbs_types.h"
#include "data/bg_bw_output_frame_6011_tileset.h"
#include "data/bg_bw_output_frame_6011_tilemap.h"

BANKREF(bg_bw_output_frame_6011)

const struct background_t bg_bw_output_frame_6011 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_6011_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_6011_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
