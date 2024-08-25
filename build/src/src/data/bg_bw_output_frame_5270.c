#pragma bank 255

// Background: bw_output_frame_5270

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5270_tileset.h"
#include "data/bg_bw_output_frame_5270_tilemap.h"

BANKREF(bg_bw_output_frame_5270)

const struct background_t bg_bw_output_frame_5270 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5270_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5270_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
