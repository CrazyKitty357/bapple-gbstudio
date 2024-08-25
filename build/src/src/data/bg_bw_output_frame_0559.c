#pragma bank 255

// Background: bw_output_frame_0559

#include "gbs_types.h"
#include "data/bg_bw_output_frame_0559_tileset.h"
#include "data/bg_bw_output_frame_0559_tilemap.h"

BANKREF(bg_bw_output_frame_0559)

const struct background_t bg_bw_output_frame_0559 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_0559_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_0559_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
