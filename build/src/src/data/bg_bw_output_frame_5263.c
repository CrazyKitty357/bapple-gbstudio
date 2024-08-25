#pragma bank 255

// Background: bw_output_frame_5263

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5263_tileset.h"
#include "data/bg_bw_output_frame_5263_tilemap.h"

BANKREF(bg_bw_output_frame_5263)

const struct background_t bg_bw_output_frame_5263 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5263_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5263_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
