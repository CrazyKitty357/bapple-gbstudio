#pragma bank 255

// Background: bw_output_frame_3596

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3596_tileset.h"
#include "data/bg_bw_output_frame_3596_tilemap.h"

BANKREF(bg_bw_output_frame_3596)

const struct background_t bg_bw_output_frame_3596 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3596_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3596_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
