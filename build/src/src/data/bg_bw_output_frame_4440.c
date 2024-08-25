#pragma bank 255

// Background: bw_output_frame_4440

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4440_tileset.h"
#include "data/bg_bw_output_frame_4440_tilemap.h"

BANKREF(bg_bw_output_frame_4440)

const struct background_t bg_bw_output_frame_4440 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4440_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4440_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
