#pragma bank 255

// Background: bw_output_frame_3942

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3942_tileset.h"
#include "data/bg_bw_output_frame_3942_tilemap.h"

BANKREF(bg_bw_output_frame_3942)

const struct background_t bg_bw_output_frame_3942 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3942_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3942_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
