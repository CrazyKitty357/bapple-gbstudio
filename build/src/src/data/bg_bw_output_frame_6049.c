#pragma bank 255

// Background: bw_output_frame_6049

#include "gbs_types.h"
#include "data/bg_bw_output_frame_6049_tileset.h"
#include "data/bg_bw_output_frame_6049_tilemap.h"

BANKREF(bg_bw_output_frame_6049)

const struct background_t bg_bw_output_frame_6049 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_6049_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_6049_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
