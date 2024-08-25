#pragma bank 255

// Background: bw_output_frame_5458

#include "gbs_types.h"
#include "data/bg_bw_output_frame_5458_tileset.h"
#include "data/bg_bw_output_frame_5458_tilemap.h"

BANKREF(bg_bw_output_frame_5458)

const struct background_t bg_bw_output_frame_5458 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_5458_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_5458_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
