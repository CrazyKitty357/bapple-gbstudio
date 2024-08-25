#pragma bank 255

// Background: bw_output_frame_2587

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2587_tileset.h"
#include "data/bg_bw_output_frame_2587_tilemap.h"

BANKREF(bg_bw_output_frame_2587)

const struct background_t bg_bw_output_frame_2587 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_2587_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_2587_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
