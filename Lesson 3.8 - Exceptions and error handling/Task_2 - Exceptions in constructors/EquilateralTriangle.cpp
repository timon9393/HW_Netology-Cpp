#include <iostream>
#include "EquilateralTriangle.h"
#include "MyException.h"

EquilateralTriangle::EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60)
{
	name = "�������������� �����������";
}

bool EquilateralTriangle::check()
{
	if (a != b || b != c) {
		throw MyException("�� ��� ������� �����!");
		return false;
	}
	else if (A != B || B != C || A != 60) {
		throw MyException("�� ��� ���� ����� 60");
		return false;
	}
	else if (!Triangle::check())
		return false;
	else return true;
}