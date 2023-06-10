#include <iostream>
#include "Rombus.h"
#include "MyException.h"

Rombus::Rombus(int a, int A, int B) : Parallelogram(a, a, A, B)
{
	name = "����";
	check();
}

bool Rombus::check()
{
	if (!(a == b && b == c && c == d)) {
		throw MyException("�� ��� ������� �����!");
		return false;
	}
	else if (A != C || B != D) {
		throw MyException("���� \"�\", \"C\" � \"B\", \"D\" ������� �� �����!");
		return false;
	}else return true;
}