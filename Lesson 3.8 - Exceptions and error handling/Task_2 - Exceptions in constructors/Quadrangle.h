#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
	bool check() override;
	void print() override;

protected:
	int a, b, c, d, A, B, C, D;
};