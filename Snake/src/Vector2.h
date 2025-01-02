#pragma once
#include <iostream>

struct Vector2 {
public:
	float x, y;

public:
	Vector2(); //����������� �� ���������
	~Vector2() {}; // ����������
	Vector2(float x, float y); // �����������

	Vector2 operator+(const Vector2& vec); //���������� ��������� ��������
	Vector2 operator-(const Vector2& vec); //���������� ��������� ���������

	Vector2 operator+=(const Vector2& vec); //���������� ��������� | += |

	bool operator==(const Vector2& vec); //���������� ��������� ���������
	bool operator!=(const Vector2& vec); //���������� ��������� ���������
	bool operator>=(const Vector2& vec); //���������� ��������� ���������
	bool operator<=(const Vector2& vec); //���������� ��������� ���������
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other); //���������� ��������� ������ �����