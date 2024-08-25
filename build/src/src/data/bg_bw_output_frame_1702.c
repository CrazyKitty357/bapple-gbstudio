#pragma bank 255

// Background: bw_output_frame_1702

#include "gbs_types.h"
#include "data/bg_bw_output_frame_1702_tileset.h"
#include "data/bg_bw_output_frame_1702_tilemap.h"

BANKREF(bg_bw_output_frame_1702)

const struct background_t bg_bw_output_frame_1702 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_1702_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_1702_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
