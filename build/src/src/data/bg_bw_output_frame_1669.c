#pragma bank 255

// Background: bw_output_frame_1669

#include "gbs_types.h"
#include "data/bg_bw_output_frame_1669_tileset.h"
#include "data/bg_bw_output_frame_1669_tilemap.h"

BANKREF(bg_bw_output_frame_1669)

const struct background_t bg_bw_output_frame_1669 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_1669_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_1669_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
