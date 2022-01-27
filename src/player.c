#include "raylib.h"
#include <stdlib.h>

#include "player.h"

Player *p;

void player_create()
{
    p = (Player *) malloc(sizeof(Player));

    p->texture = LoadTexture("assets/kenney_sokobanpack/PNG/Retina/Player/player_03.png");
    p->rec = (Rectangle) {
        GetScreenWidth() / 2 - p->texture.width / 2,
        GetScreenHeight() / 2 - p->texture.height / 2,
        p->texture.width,
        p->texture.height
    };
}

void player_destroy()
{
    UnloadTexture(p->texture);
    free(p);
}

void player_draw()
{
    if (p == NULL) {
        return;
    }

    DrawTexture(
        p->texture,
        p->rec.x,
        p->rec.y,
        WHITE
    );
}

void player_update()
{
    Vector2 delta = { 0 };

    delta.x = (IsKeyPressed(KEY_D) - IsKeyPressed(KEY_A)) * p->rec.width;
    delta.y = (IsKeyPressed(KEY_S) - IsKeyPressed(KEY_W)) * p->rec.height;

    p->rec.x += delta.x;
    p->rec.y += delta.y;
}

