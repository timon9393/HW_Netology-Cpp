#include <iostream>
#include <Windows.h>


class Figure
{
public:
	virtual void print(){}

	int get_a() { return a; }
	int get_b() { return b; }
	int get_c() { return c; }
	int get_d() { return d; }
	int get_A() { return A; }
	int get_B() { return B; }
	int get_C() { return C; }
	int get_D() { return D; }
	std::string get_name() { return name; }

protected:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	std::string name = "Фигура";
};

class Triangle : public Figure
{
public:
	Triangle(int a, int b, int c, int A, int B, int C)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		name = "Треугольник";
	}
	void print() override
	{
		std::cout << get_name() << ":" << std::endl;
		std::cout << "Стороны: " << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
		std::cout << "Углы: " << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl << std::endl;
	}
};

class RightTriangle : public Triangle
{
public:
	RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, C)
	{
		name = "Прямоугольный треугольник";
		C = 90;
	}
};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, c, A, B, C)
	{
		name = "Равнобедренный треугольник";
		c = a;
		C = A;
	}
};

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle(int a) : Triangle(a, b, c, A, B, C)
	{
		name = "Равносторонний треугольник";
		b = c = a;
		A = B = C = 60;
	}
};

class Quadrangle : public Figure
{
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		name = "Четырёхугольник";
	}
	void print() override
	{
		std::cout << get_name() << ":" << std::endl;
		std::cout << "Стороны: " << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
		std::cout << "Углы: " << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl << std::endl;
	}
};

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, c, d, A, B, C, D)
	{
		c = a;
		d = b;
		C = A;
		D = B;
		name = "Параллелограмм";
	}
};

class Rectang : public Parallelogram
{
public:
	Rectang(int a, int b) : Parallelogram(a, b, A, B)
	{
		A = B = C = D = 90;
		name = "Прямоугольник";
	}
};

class Square : public Parallelogram
{
public:
	Square(int a) : Parallelogram(a, b, A, B)
	{
		A = B = C = D = 90;
		b = c = d = a;
		name = "Квадрат";
	}
};

class Rombus : public Parallelogram
{
public:
	Rombus(int a, int A, int B) : Parallelogram(a, b, A, B)
	{
		b = d = a;
		name = "Ромб";
	}
};

void print_info(Figure* info)
{
	info->print();
}



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



}

