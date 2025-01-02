#include "Vector2.h"

Vector2::Vector2()
	:x(0), y(0) {}

Vector2::Vector2(float x, float y)
	:x(x), y(y) {}

Vector2 Vector2::operator+(const Vector2& vec) {
	return Vector2(vec.x + x, vec.y + y);
}

Vector2 Vector2::operator+=(const Vector2& vec) {
	x += vec.x;
	y += vec.y;

	return Vector2(x, y);
}

Vector2 Vector2::operator-(const Vector2& vec) {
	return Vector2(x - vec.x, y - vec.y);
}

bool Vector2::operator==(const Vector2& vec) {
	return (x == vec.x && y == vec.y);
}

bool Vector2::operator!=(const Vector2& vec) {
	return !(x == vec.x && y == vec.y);
}

bool Vector2::operator>=(const Vector2& vec) {
	return (x >= vec.x && y >= vec.y);
}

bool Vector2::operator<=(const Vector2& vec) {
	return (x <= vec.x && y <= vec.y);
}

std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
	stream << "( " << other.x << ", " << other.y << " )";
	return stream;
}
