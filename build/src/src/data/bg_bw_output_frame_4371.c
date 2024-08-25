#pragma bank 255

// Background: bw_output_frame_4371

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4371_tileset.h"
#include "data/bg_bw_output_frame_4371_tilemap.h"

BANKREF(bg_bw_output_frame_4371)

const struct background_t bg_bw_output_frame_4371 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4371_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4371_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
