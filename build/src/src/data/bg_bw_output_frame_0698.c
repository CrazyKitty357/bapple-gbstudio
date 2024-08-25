#pragma bank 255

// Background: bw_output_frame_0698

#include "gbs_types.h"
#include "data/bg_bw_output_frame_0698_tileset.h"
#include "data/bg_bw_output_frame_0698_tilemap.h"

BANKREF(bg_bw_output_frame_0698)

const struct background_t bg_bw_output_frame_0698 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_0698_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_0698_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
