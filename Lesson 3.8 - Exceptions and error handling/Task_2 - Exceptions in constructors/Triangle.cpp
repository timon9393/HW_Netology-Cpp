#include <iostream>
#include "Triangle.h"
#include "MyException.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	name = "�����������";
	sides_count = 3;
	check();
}
void Triangle::print()
{
	std::cout << name << " (�������: " << a << ", " << b << ", " << c << "; ����: " << A << ", " << B << ", " << C << ") ������" << std::endl << std::endl;
}

bool Triangle::check()
{
	if (sides_count != 3) {
		throw MyException("���������� ������ �� ����� 3!");
		return false;
	}
	else if (A + B + C != 180) {
		throw MyException("����� ����� �� ����� 180 ��������!");
		return false;
	}
	else return true;
}