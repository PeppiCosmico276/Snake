#include <iostream>
#include <string>
#include "Vector2.h"
#include "Snake.h"

void Snake::SetPosition(Vector2 pos) {
	position = pos;
}

void Snake::SetDirection(const std::string& dir) {
	if (dir == "left") {
		direction = Vector2(-1.0f, 0.0f);
	}

	else if (dir == "up") {
		direction = Vector2(0.0f, 1.0f);
	}

	if (dir == "down") {
		direction = Vector2(0.0f, -1.0f);
	}

	if(dir == "right") {
		direction = Vector2(1.0f, 0.0f);
	}
	
	std::cout << "| " << dir << " | " << direction << std::endl;
}