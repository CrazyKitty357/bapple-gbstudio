#pragma bank 255

// Background: bw_output_frame_5989

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5989_tileset.h"
#include "data/bg_bw_output_frame_5989_tilemap.h"

BANKREF(bg_bw_output_frame_5989)

const struct background_t bg_bw_output_frame_5989 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5989_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5989_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
