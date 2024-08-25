#pragma bank 255

// Background: bw_output_frame_5593

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5593_tileset.h"
#include "data/bg_bw_output_frame_5593_tilemap.h"

BANKREF(bg_bw_output_frame_5593)

const struct background_t bg_bw_output_frame_5593 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5593_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5593_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
