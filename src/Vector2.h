#pragma once

struct Vector2 {
public:
	int x, y;

public:
	Vector2(); //����������� �� ���������
	~Vector2() {}; // ����������
	Vector2(int x, int y); // �����������

	Vector2 operator+(const Vector2& vec); //���������� ��������� ��������
	Vector2 operator-(const Vector2& vec); //���������� ��������� ���������

	Vector2 operator+=(const Vector2& vec); //���������� ��������� | += |

	bool operator==(const Vector2& vec); //���������� ��������� ���������
	bool operator!=(const Vector2& vec); //���������� ��������� ���������
	bool operator>=(const Vector2& vec); //���������� ��������� ���������
	bool operator<=(const Vector2& vec); //���������� ��������� ���������
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other); //���������� ��������� ������ � �����