#pragma bank 255

// Background: bw_output_frame_4337

#include "gbs_types.h"
#include "data/bg_bw_output_frame_4337_tileset.h"
#include "data/bg_bw_output_frame_4337_tilemap.h"

BANKREF(bg_bw_output_frame_4337)

const struct background_t bg_bw_output_frame_4337 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_4337_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_4337_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
