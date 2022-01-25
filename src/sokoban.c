#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "Sokobão");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(BLACK);

            DrawFPS(0, 0);
        EndDrawing();
    }

    CloseWindow();
}

