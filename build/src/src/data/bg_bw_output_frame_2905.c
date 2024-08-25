#pragma bank 255

// Background: bw_output_frame_2905

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2905_tileset.h"
#include "data/bg_bw_output_frame_2905_tilemap.h"

BANKREF(bg_bw_output_frame_2905)

const struct background_t bg_bw_output_frame_2905 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_2905_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_2905_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
