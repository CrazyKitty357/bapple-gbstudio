#pragma bank 255

// Background: bw_output_frame_2483

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2483_tileset.h"
#include "data/bg_bw_output_frame_2483_tilemap.h"

BANKREF(bg_bw_output_frame_2483)

const struct background_t bg_bw_output_frame_2483 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_2483_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_2483_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
