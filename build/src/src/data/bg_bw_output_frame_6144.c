#pragma bank 255

// Background: bw_output_frame_6144

#include "gbs_types.h"
#include "data/bg_bw_output_frame_6144_tileset.h"
#include "data/bg_bw_output_frame_6144_tilemap.h"

BANKREF(bg_bw_output_frame_6144)

const struct background_t bg_bw_output_frame_6144 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_6144_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_6144_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
