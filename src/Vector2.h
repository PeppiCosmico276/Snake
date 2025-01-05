#pragma once

struct Vector2 {
public:
	int x, y;

public:
	Vector2(); //Конструктор по умолчанию
	~Vector2() {}; // Деструктор
	Vector2(int x, int y); // Конструктор

	Vector2 operator+(const Vector2& vec); //Перегрузка оператора сложения
	Vector2 operator-(const Vector2& vec); //Перегрузка оператора вычитания

	Vector2 operator+=(const Vector2& vec); //Перегрузка оператора | += |

	bool operator==(const Vector2& vec); //Перегрузка оператора равенства
	bool operator!=(const Vector2& vec); //Перегрузка оператора равенства
	bool operator>=(const Vector2& vec); //Перегрузка оператора равенства
	bool operator<=(const Vector2& vec); //Перегрузка оператора равенства
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other); //Перегрузка оператора сдвига в влево