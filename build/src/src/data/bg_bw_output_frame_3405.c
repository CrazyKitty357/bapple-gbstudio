#pragma bank 255

// Background: bw_output_frame_3405

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3405_tileset.h"
#include "data/bg_bw_output_frame_3405_tilemap.h"

BANKREF(bg_bw_output_frame_3405)

const struct background_t bg_bw_output_frame_3405 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3405_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3405_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
