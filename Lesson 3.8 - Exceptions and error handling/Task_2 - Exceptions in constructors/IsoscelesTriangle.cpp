#include <iostream>
#include "IsoscelesTriangle.h"
#include "MyException.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A)
{
	name = "�������������� �����������";
}

bool IsoscelesTriangle::check()
{
	if (a != c) {
		throw MyException("������� \"�\" �� ����� ������� \"�\"");
		return false;
	}
	else if (A != C) {
		throw MyException("���� \"�\" �� ����� ���� \"�\"");
		return false;
	}
	else if (!Triangle::check())
		return false;
	else return true;
}