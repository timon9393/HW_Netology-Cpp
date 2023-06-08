#include <iostream>
#include "Quadrangle.h"
#include "MyException.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	sides_count = 4;
	name = "��������������";
}

bool Quadrangle::check()
{
	if (sides_count != 4) {
		throw MyException("���������� ������ �� ����� 4!");
		return false;
	}
	else if (A + B + C + D != 360) {
		throw MyException("����� ����� �� ����� 360 ��������!");
		return false;
	}
	else return true;
}

void Quadrangle::print()
{
	try
	{
		check();
		std::cout << name << " (�������: " << a << ", " << b << ", " << c << ", " << d << "; ����: " << A << ", " << B << ", " << C << ", " << D << ") ������" << std::endl << std::endl;
	}
	catch (const MyException& ex)
	{
		std::cout << "������ �������� ������. �������: " << ex.what() << std::endl << std::endl;
	}
}