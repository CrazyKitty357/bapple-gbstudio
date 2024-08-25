#pragma bank 255

// Background: bw_output_frame_4218

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4218_tileset.h"
#include "data/bg_bw_output_frame_4218_tilemap.h"

BANKREF(bg_bw_output_frame_4218)

const struct background_t bg_bw_output_frame_4218 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4218_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4218_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
