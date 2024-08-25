#pragma bank 255

// Background: bw_output_frame_4491

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4491_tileset.h"
#include "data/bg_bw_output_frame_4491_tilemap.h"

BANKREF(bg_bw_output_frame_4491)

const struct background_t bg_bw_output_frame_4491 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4491_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4491_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
