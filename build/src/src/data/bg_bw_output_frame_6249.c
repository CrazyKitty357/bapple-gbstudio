#pragma bank 255

// Background: bw_output_frame_6249

#include "gbs_types.h"
#include "data/bg_bw_output_frame_6249_tileset.h"
#include "data/bg_bw_output_frame_6249_tilemap.h"

BANKREF(bg_bw_output_frame_6249)

const struct background_t bg_bw_output_frame_6249 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_6249_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_6249_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
