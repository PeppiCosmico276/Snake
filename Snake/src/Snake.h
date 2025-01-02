#pragma once
#include "Vector2.h"

struct Snake {
public:
	Vector2 position;
	Vector2 direction;

public:
	void SetPosition(Vector2 startPos);
	void SetDirection(const std::string& dir);
};