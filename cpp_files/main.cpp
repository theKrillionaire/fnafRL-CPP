#include <stdio.h>
#include <raylib.h>
#include "animatronic.h"

int main() {
	const char* windowName = "Fnaf Raylib";
	int windowSize[2] = { 640,480 };
	InitWindow(windowSize[0], windowSize[1], windowName);
	SetTargetFPS(30);
	
	animatronic bonnie;
	
	
	
	while(!WindowShouldClose()) {
		bonnie.update();
		BeginDrawing();
			DrawText("baller", 220 - MeasureText("baller", 20), 420, 20, WHITE);
		EndDrawing();
	}
	return 0;
}
