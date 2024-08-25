#pragma bank 255

// Background: bw_output_frame_5031

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5031_tileset.h"
#include "data/bg_bw_output_frame_5031_tilemap.h"

BANKREF(bg_bw_output_frame_5031)

const struct background_t bg_bw_output_frame_5031 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5031_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5031_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
