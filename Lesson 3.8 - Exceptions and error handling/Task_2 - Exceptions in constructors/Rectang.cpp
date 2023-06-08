#include <iostream>
#include "Rectang.h"
#include "MyException.h"

Rectang::Rectang(int a, int b) : Parallelogram(a, b, 90, 90)
{
	name = "�������������";
}

bool Rectang::check()
{
	if (a != c || b != d) {
		throw MyException("������� \"�\", \"c\" � \"b\", \"d\" ������� �� �����!");
		return false;
	}
	else if (!(A == B && B == C && C == D && D == 90)) {
		throw MyException("��� ���� �� ����� 90 ��������");
		return false;
	}
	else if (!Quadrangle::check())
		return false;
	else return true;
}