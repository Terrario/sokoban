#ifndef __player_h_
#define __player_h_

#include "raylib.h"

typedef struct {
    Texture2D texture;
    Rectangle rec;
} Player;

void player_create();
void player_destroy();
void player_draw();
void player_update();

#endif

