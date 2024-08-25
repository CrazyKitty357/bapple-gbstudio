#pragma bank 255

// Background: bw_output_frame_0692

#include "gbs_types.h"
#include "data/bg_bw_output_frame_0692_tileset.h"
#include "data/bg_bw_output_frame_0692_tilemap.h"

BANKREF(bg_bw_output_frame_0692)

const struct background_t bg_bw_output_frame_0692 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_0692_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_0692_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
