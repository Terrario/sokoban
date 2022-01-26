#include "raylib.h"

#include "player.h"

int main(void)
{
    InitWindow(800, 600, "Sokobão");
    SetTargetFPS(60);

    player_create();

    while (!WindowShouldClose()) {
        player_update();

        BeginDrawing();
            ClearBackground(BLACK);

            DrawFPS(0, 0);
        EndDrawing();
    }

    player_destroy();

    CloseWindow();
}

