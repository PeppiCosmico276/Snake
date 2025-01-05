#pragma once
#include <string>
#include "Vector2.h"

struct Snake {
public:
	Vector2 position;
	Vector2 direction;

public:
	void SetPosition(Vector2 startPos);					//Задаёт позицию
	void SetDirection(const std::string& dir);	//Задаёт направление
	
	void DebugInfo();	//Выводит информацию (позиция, направление и т.д.) 
};