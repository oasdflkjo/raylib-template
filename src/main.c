#include "raylib.h"

int main(void) {
  // Initialization
  const int screenWidth = 800;
  const int screenHeight = 450;

  InitWindow(screenWidth, screenHeight, "Hello Raylib!");

  // Main game loop
  while (!WindowShouldClose()) // Detect window close button or ESC key
  {
    // Start Drawing
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawText("Hello, Raylib!", 190, 200, 40, LIGHTGRAY);

    EndDrawing();
    // End Drawing
  }

  // De-Initialization
  CloseWindow(); // Close window and OpenGL context

  return 0;
}
