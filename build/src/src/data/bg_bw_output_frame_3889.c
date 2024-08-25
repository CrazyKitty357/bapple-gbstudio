#pragma bank 255

// Background: bw_output_frame_3889

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3889_tileset.h"
#include "data/bg_bw_output_frame_3889_tilemap.h"

BANKREF(bg_bw_output_frame_3889)

const struct background_t bg_bw_output_frame_3889 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3889_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3889_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
