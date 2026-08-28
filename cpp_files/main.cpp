#include <stdio.h>
#include <raylib.h>
#include "animatronic.h"
#include "player.h"

int main() {
	const char* windowName = "Fnaf Raylib";
	int windowSize[2] = { 640,480 };
	InitWindow(windowSize[0], windowSize[1], windowName);
	SetTargetFPS(30);
	
	animatronic bonnie;
	bonnie.forcePos(0);
	
	player p;
	bool inp[5];
	
	
	while(!WindowShouldClose()) {
		bonnie.update();
		p.getInput(inp);
		BeginDrawing();
			DrawText("baller", 220 - MeasureText("baller", 20), 420, 20, WHITE);
		EndDrawing();
	}
	return 0;
}
