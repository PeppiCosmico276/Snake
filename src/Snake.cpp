#include <iostream>
#include <string>

#include "Vector2.h"
#include "Snake.h"
#include "GameManager.h"

void Snake::SetPosition(Vector2 pos) {
	position = pos;
}

void Snake::SetDirection(const std::string& dir) {
	if (dir == "left") {
		direction = Vector2(-1.0f, 0.0f);
	}

	if (dir == "up") {
		direction = Vector2(0.0f, 1.0f);
	}

	if (dir == "down") {
		direction = Vector2(0.0f, -1.0f);
	}

	if(dir == "right") {
		direction = Vector2(1.0f, 0.0f);
	}

// Выводит информацию при каждом инпуте. Автоматически включается в режиме Debug. Чтобы отключить полностью, нужно заменить '1' на '0'
#if DEBUG_INFO && 1
	DebugInfo();
#endif
}

void Snake::DebugInfo() {
	std::cout << "Position: " << position << std::endl;
	std::cout << "Dir:      " << direction << std::endl;
}