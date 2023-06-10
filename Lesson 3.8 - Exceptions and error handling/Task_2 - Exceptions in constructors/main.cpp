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
#define CATCH catch (const MyException& ex) { std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << std::endl << std::endl; }
	
	Figure figure;
	figure.print();
	try
	{
		Triangle triangle(1, 2, 3, 30, 60, 60);
		Figure* par_triangle = &triangle;
		par_triangle->print();
	}
	CATCH

	try 
	{
		RightTriangle right_triangle1(40, 50, 60, 70, 80);
		Figure* par_right_triangle1 = &right_triangle1;
		par_right_triangle1->print();
	}
	CATCH

	try
	{
		RightTriangle right_triangle2(40, 50, 30, 60, 30);
		Figure* par_right_triangle2 = &right_triangle2;
		par_right_triangle2->print();
	}
	CATCH

	try
	{
		IsoscelesTriangle isosceles_triangle(70, 80, 30, 120);
		Figure* par_isosceles_triangle = &isosceles_triangle;
		par_isosceles_triangle->print();
	}
	CATCH

	try
	{
		EquilateralTriangle equilateral_triangle(50);
		Figure* par_equilateral_triangle = &equilateral_triangle;
		par_equilateral_triangle->print();
	}
	CATCH

	try
	{
		Quadrangle quadrangle(1, 2, 3, 4, 60, 60, 120, 120);
		Figure* par_quadrangle = &quadrangle;
		par_quadrangle->print();
	}
	CATCH

	try
	{
		Parallelogram parallelogram(99, 98, 56, 42);
		Figure* par_parallelogram = &parallelogram;
		par_parallelogram->print();
	}
	CATCH

	try
	{
		Rectang rectangle(2, 4);
		Figure* par_rectangle = &rectangle;
		par_rectangle->print();
	}
	CATCH

	try
	{
		Square square(50);
		Figure* par_square = &square;
		par_square->print();
	}
	CATCH

	try
	{
		Rombus rombus(23, 40, 140);
		Figure* par_rombus = &rombus;
		par_rombus->print();
	}
	CATCH
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
}