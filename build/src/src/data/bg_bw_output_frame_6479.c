#pragma bank 255

// Background: bw_output_frame_6479

#include "gbs_types.h"
#include "data/bg_bw_output_frame_6479_tileset.h"
#include "data/bg_bw_output_frame_6479_tilemap.h"

BANKREF(bg_bw_output_frame_6479)

const struct background_t bg_bw_output_frame_6479 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_6479_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_6479_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
