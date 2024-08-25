#pragma bank 255

// Background: bw_output_frame_2229

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2229_tileset.h"
#include "data/bg_bw_output_frame_2229_tilemap.h"

BANKREF(bg_bw_output_frame_2229)

const struct background_t bg_bw_output_frame_2229 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_2229_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_2229_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
