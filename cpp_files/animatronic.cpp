#include "animatronic.h"
#include <stdio.h>
#include <raylib.h>

void animatronic::update() {
	timer -= diff;
	printf("timer is: %i. position is: %i\n", timer, position);
	if(timer <= 0) {
		if(position >= 10) {
			position = 0;
		} else {
			position++;
		}
		
		timer = GetRandomValue(100,1000);
	}
}

void animatronic::forcePos(int force) {
	position = force;
}
