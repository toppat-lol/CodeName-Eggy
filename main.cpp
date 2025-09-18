#include "raylib.h"

int main(void)
{
    const int screenWidth = 600;
    const int screenHeight = 600;
    
    initWindow(screenWidth, screenHeight,"CodeName Eggy");
    
    setTargetFPS(60);
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("TEST", 30, 30, 20,RAYWHITE);
        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
