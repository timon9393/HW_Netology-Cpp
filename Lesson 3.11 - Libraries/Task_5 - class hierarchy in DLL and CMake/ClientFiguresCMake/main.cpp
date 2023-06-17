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

	Figures::Triangle triangle(1, 2, 3, 4, 5, 6);
	Figures::RightTriangle right_triangle(40, 50, 60, 70, 80);
	Figures::IsoscelesTriangle isosceles_triangle(70, 80, 30, 60);
	Figures::EquilateralTriangle equilateral_triangle(55);
	Figures::Quadrangle quadrangle(1, 2, 3, 4, 40, 30, 20, 10);
	Figures::Parallelogram parallelogram(99, 98, 56, 42);
	Figures::Rectang rectangle(2, 4);
	Figures::Square square(50);
	Figures::Rombus rombus(23, 40, 140);
	Figures::print_info(&triangle);
	Figures::print_info(&right_triangle);
	Figures::print_info(&isosceles_triangle);
	Figures::print_info(&equilateral_triangle);
	Figures::print_info(&quadrangle);
	Figures::print_info(&parallelogram);
	Figures::print_info(&rectangle);
	Figures::print_info(&square);
	Figures::print_info(&rombus);

	system("pause");
}