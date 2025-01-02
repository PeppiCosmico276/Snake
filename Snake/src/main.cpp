#include <iostream>
#include "Vector2.h"
#include "Snake.h"

#define LOG(x) std::cout << x << std::endl;

int main()
{
	Snake snake;

	snake.SetPosition(Vector2(5, 0));
	snake.SetDirection("up");

	std::cout << "Position: " << snake.position << "\nDirection: " << snake.direction;

	std::cin.get();
}
