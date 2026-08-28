#include "player.h"
#include <raylib.h>
#include <stdio.h>

void player::getInput(bool* inputs) {
	inputs[0] = IsKeyPressed(KEY_Q); // light left
	inputs[1] = IsKeyPressed(KEY_A); // door left
	inputs[2] = IsKeyPressed(KEY_E); // light right
	inputs[3] = IsKeyPressed(KEY_D); // door right
	inputs[4] = IsKeyPressed(KEY_SPACE); // cameras button
	for(int i = 0; i < 5; i++) {
		printf("%i", inputs[i]);
	}
}
