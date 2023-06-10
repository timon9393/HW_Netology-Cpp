#include <iostream>
#include "Square.h"
#include "MyException.h"

Square::Square(int a) : Parallelogram(a, a, 90, 90)
{
	name = "�������";
	check();
}

bool Square::check()
{
	if (a != b || b != c || c != d) {
		throw MyException("�� ��� ������� �����!");
		return false;
	}
	else if (A != B || B != C || C != D || A != 90) {
		throw MyException("�� ��� ���� ����� 90");
		return false;
	}else return true;
}