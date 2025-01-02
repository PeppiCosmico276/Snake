#include <iostream>
#include "Vector2.h"
#include "Snake.h"
#include "Inputs.h"

int main()
{
	Snake snake;

	while (true) {
		MoveInput(snake);
	}
	
	std::cin.get();
}