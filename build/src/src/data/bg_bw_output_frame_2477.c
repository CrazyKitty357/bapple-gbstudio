#pragma bank 255

// Background: bw_output_frame_2477

#include "gbs_types.h"
#include "data/bg_bw_output_frame_2477_tileset.h"
#include "data/bg_bw_output_frame_2477_tilemap.h"

BANKREF(bg_bw_output_frame_2477)

const struct background_t bg_bw_output_frame_2477 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_2477_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_2477_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
