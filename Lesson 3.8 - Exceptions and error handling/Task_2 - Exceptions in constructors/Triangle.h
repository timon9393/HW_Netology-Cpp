#pragma once
#include "Figure.h"

class Triangle : public Figure {
public:
	Triangle(int a, int b, int c, int A, int B, int C);
	void print() override;
	bool check() override;

protected:
	int a, b, c, A, B, C;
};