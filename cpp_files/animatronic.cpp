#include "animatronic.h"
#include <stdio.h>
#include <raylib.h>

void animatronic::update() {
	timer -= diff;
	printf("baller %i\n", timer);
	if(timer <= 0) {
		timer = GetRandomValue(100,1000);
	}
}
