/* -*- mode: C; c-basic-offset: 4; intent-tabs-mode: nil -*-
 *
 * Sifteo SDK Example.
 * Copyright <c> 2011 Sifteo, Inc. All rights reserved.
 */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#include <sifteo.h>
#include "assets.gen.h"

using namespace Sifteo;

#ifndef NUM_CUBES
#  define NUM_CUBES 1
#endif

static Cube cubes[] = { Cube(0), Cube(1) };

static void init() {
    for (unsigned i = 0; i < NUM_CUBES; i++) {
        cubes[i].enable();
        cubes[i].loadAssets(GameAssets);
        VidMode_BG0_ROM rom(cubes[i].vbuf);
        rom.init();
        rom.BG0_text(Vec2(1,1), "Loading...");
    }
    for (;;) {
        bool done = true;
        for (unsigned i = 0; i < NUM_CUBES; i++) {
            VidMode_BG0_ROM rom(cubes[i].vbuf);
            rom.BG0_progressBar(Vec2(0,7), cubes[i].assetProgress(GameAssets, VidMode_BG0::LCD_width), 2);
			done &= cubes[i].assetDone(GameAssets);
        }
        System::paint();
        if (done) break;
    }
    for (unsigned i = 0; i < NUM_CUBES; i++) {
		VidMode_BG0 mode(cubes[i].vbuf);
		mode.init();
		mode.BG0_drawAsset(Vec2(0,0), Background);
    }
}

void siftmain() {
    init();
	for(;;) {
        System::paint();
    }
}
