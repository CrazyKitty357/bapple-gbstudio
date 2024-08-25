#pragma bank 255

// Background: bw_output_frame_3625

#include "gbs_types.h"
#include "data/bg_bw_output_frame_3625_tileset.h"
#include "data/bg_bw_output_frame_3625_tilemap.h"

BANKREF(bg_bw_output_frame_3625)

const struct background_t bg_bw_output_frame_3625 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bw_output_frame_3625_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bw_output_frame_3625_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
