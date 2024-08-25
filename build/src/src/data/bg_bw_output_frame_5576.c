#pragma bank 255

// Background: bw_output_frame_5576

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5576_tileset.h"
#include "data/bg_bw_output_frame_5576_tilemap.h"

BANKREF(bg_bw_output_frame_5576)

const struct background_t bg_bw_output_frame_5576 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5576_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5576_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
