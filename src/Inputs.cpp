#include <iostream>
#include <conio.h>

#include "Inputs.h"
#include "Snake.h"

void MoveInput(Snake snake) {
	if (_kbhit()) {
		switch (_getch()) {
		case 72:
			snake.SetDirection("up");
			break;

		case 80:
			snake.SetDirection("down");
			break;

		case 77:
			snake.SetDirection("right");
			break;

		case 75:
			snake.SetDirection("left");
			break;
		}
	}
}