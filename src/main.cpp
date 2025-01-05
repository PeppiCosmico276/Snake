#include <iostream>

#include "Vector2.h"
#include "Snake.h"
#include "Inputs.h"
#include "GameManager.h"


int main()
{
	Snake snake;

	while (true) {
		MoveInput(snake);
	}

	std::cin.get();
}