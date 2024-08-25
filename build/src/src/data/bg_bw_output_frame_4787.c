#pragma bank 255

// Background: bw_output_frame_4787

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4787_tileset.h"
#include "data/bg_bw_output_frame_4787_tilemap.h"

BANKREF(bg_bw_output_frame_4787)

const struct background_t bg_bw_output_frame_4787 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4787_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4787_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
