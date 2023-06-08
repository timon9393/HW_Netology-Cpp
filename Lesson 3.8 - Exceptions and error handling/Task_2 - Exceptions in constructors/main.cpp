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
#include "MyException.h"



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Figure figure;
	figure.print();
	Triangle triangle(1, 2, 3, 30, 60, 60);
	RightTriangle right_triangle1(40, 50, 60, 70, 80);
	RightTriangle right_triangle2(40, 50, 30, 60, 30);
	IsoscelesTriangle isosceles_triangle(70, 80, 30, 120);
	EquilateralTriangle equilateral_triangle(50);
	Quadrangle quadrangle(1, 2, 3, 4, 60, 60, 120, 120);
	Parallelogram parallelogram(99, 98, 56, 42);
	Rectang rectangle(2, 4);
	Square square(50);
	Rombus rombus(23, 40, 140);

	Figure* par_triangle = &triangle;
	par_triangle->print();
	Figure* par_right_triangle1 = &right_triangle1;
	par_right_triangle1->print();
	Figure* par_right_triangle2 = &right_triangle2;
	par_right_triangle2->print();
	Figure* par_isosceles_triangle = &isosceles_triangle;
	par_isosceles_triangle->print();
	Figure* par_equilateral_triangle = &equilateral_triangle;
	par_equilateral_triangle->print();
	Figure* par_quadrangle = &quadrangle;
	par_quadrangle->print();
	Figure* par_parallelogram = &parallelogram;
	par_parallelogram->print();
	Figure* par_rectangle = &rectangle;
	par_rectangle->print();
	Figure* par_square = &square;
	par_square->print();
	Figure* par_rombus = &rombus;
	par_rombus->print();
}