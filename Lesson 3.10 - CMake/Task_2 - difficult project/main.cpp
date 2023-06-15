#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectang.h"
#include "Square.h"
#include "Rombus.h"
#include "print_info.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle triangle(1, 2, 3, 4, 5, 6);
	RightTriangle right_triangle(40, 50, 60, 70, 80);
	IsoscelesTriangle isosceles_triangle(70, 80, 30, 60);
	EquilateralTriangle equilateral_triangle(55);
	Quadrangle quadrangle(1, 2, 3, 4, 40, 30, 20, 10);
	Parallelogram parallelogram(99, 98, 56, 42);
	Rectang rectangle(2, 4);
	Square square(50);
	Rombus rombus(23, 40, 140);
	print_info(&triangle);
	print_info(&right_triangle);
	print_info(&isosceles_triangle);
	print_info(&equilateral_triangle);
	print_info(&quadrangle);
	print_info(&parallelogram);
	print_info(&rectangle);
	print_info(&square);
	print_info(&rombus);

	system("pause");
}