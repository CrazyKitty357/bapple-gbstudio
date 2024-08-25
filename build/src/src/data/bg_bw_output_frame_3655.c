#pragma bank 255

// Background: bw_output_frame_3655

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3655_tileset.h"
#include "data/bg_bw_output_frame_3655_tilemap.h"

BANKREF(bg_bw_output_frame_3655)

const struct background_t bg_bw_output_frame_3655 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3655_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3655_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
