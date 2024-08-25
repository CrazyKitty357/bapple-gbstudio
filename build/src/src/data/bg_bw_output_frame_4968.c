#pragma bank 255

// Background: bw_output_frame_4968

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4968_tileset.h"
#include "data/bg_bw_output_frame_4968_tilemap.h"

BANKREF(bg_bw_output_frame_4968)

const struct background_t bg_bw_output_frame_4968 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4968_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4968_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
