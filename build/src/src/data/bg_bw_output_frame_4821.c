#pragma bank 255

// Background: bw_output_frame_4821

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4821_tileset.h"
#include "data/bg_bw_output_frame_4821_tilemap.h"

BANKREF(bg_bw_output_frame_4821)

const struct background_t bg_bw_output_frame_4821 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4821_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4821_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
