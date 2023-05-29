#include <iostream>
#include <Windows.h>


class Figure
{
public:
	int get_a() { return a; }
	int get_b() { return b; }
	int get_c() { return c; }
	int get_d() { return d; }
	int get_A() { return A; }
	int get_B() { return B; }
	int get_C() { return C; }
	int get_D() { return D; }
	int get_sides_count() { return sides_count; }
	std::string get_name() { return name; }

	virtual bool check()
	{
		if (sides_count == 0)
			return true;
		else return false;
	}

	virtual void print_info()
	{
		correct = check() ? "Правильная" : "Неправильная";
		std::cout << std::endl << get_name() << ":" << std::endl;
		std::cout << correct << std::endl;
		std::cout << "Количество сторон: " << sides_count << std::endl;
	}

protected:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int sides_count = 0;
	std::string name = "Фигура";
	std::string correct;
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
		sides_count = 3;
		name = "Треугольник";
		check();
	}
	
	bool check() override
	{
		if (sides_count == 3 && A + B + C == 180)
			return true;
		else return false;
	}
	
	void print_info() override
	{
		Figure::print_info();
		std::cout << "Стороны: " << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
		std::cout << "Углы: " << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
	}
};

class RightTriangle : public Triangle
{
public:
	RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, C)
	{
		name = "Прямоугольный треугольник";
		C = 90;
		check();
	}

	bool check() override
	{
		if (Triangle::check() && C == 90)
			return true;
		else return false;
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
		check();
	}

	bool check() override
	{
		if (Triangle::check() && a == c && A == C)
			return true;
		else return false;
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
		check();
	}

	bool check() override
	{
		if (Triangle::check() && a == b && b == c && A == B && B == C)
			return true;
		else return false;
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
		sides_count = 4;
		name = "Четырёхугольник";
		check();
	}

	void print_info() override
	{
		Figure::print_info();
		std::cout << "Стороны: " << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
		std::cout << "Углы: " << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl << std::endl;
	}

	bool check() override
	{
		if (sides_count == 4 && A + B + C + D == 360)
			return true;
		else return false;
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
		check();
	}

	bool check() override
	{
		if (Quadrangle::check() && a == c && b == d && A == C && B == D)
			return true;
		else return false;
	}
};

class Rectang : public Parallelogram
{
public:
	Rectang(int a, int b) : Parallelogram(a, b, A, B)
	{
		A = B = C = D = 90;
		name = "Прямоугольник";
		check();
	}

	bool check() override
	{
		if (Quadrangle::check() && a == c && b == d && A == B && B == C && C == D && D == 90)
			return true;
		else return false;
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
		check();
	}

	bool check() override
	{
		if (Quadrangle::check() && a == b && b == c && c == d && A == B && B == C && C == D && D == 90)
			return true;
		else return false;
	}
};

class Rombus : public Parallelogram
{
public:
	Rombus(int a, int A, int B) : Parallelogram(a, b, A, B)
	{
		b = d = a;
		name = "Ромб";
		check();
	}

	bool check() override
	{
		if (Quadrangle::check() && a == b && b == c && c == d && A == C && B == D)
			return true;
		else return false;
	}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Figure figure;
	figure.print_info();
	Triangle triangle(1, 2, 3, 30, 60, 60);
	RightTriangle right_triangle1(40, 50, 60, 70, 80);
	RightTriangle right_triangle2(40, 50, 30, 60, 30);
	IsoscelesTriangle isosceles_triangle(70, 80, 30, 120);
	EquilateralTriangle equilateral_triangle(60);
	Quadrangle quadrangle(1, 2, 3, 4, 60, 60, 120, 120);
	Parallelogram parallelogram(99, 98, 56, 42);
	Rectang rectangle(2, 4);
	Square square(50);
	Rombus rombus(23, 30, 140);

	Figure* par_triangle = &triangle;
	par_triangle->print_info();
	Figure* par_right_triangle1 = &right_triangle1;
	par_right_triangle1->print_info();
	Figure* par_right_triangle2 = &right_triangle2;
	par_right_triangle2->print_info();
	Figure* par_isosceles_triangle = &isosceles_triangle;
	par_isosceles_triangle->print_info();
	Figure* par_equilateral_triangle = &equilateral_triangle;
	par_equilateral_triangle->print_info();
	Figure* par_quadrangle = &quadrangle;
	par_quadrangle->print_info();
	Figure* par_parallelogram = &parallelogram;
	par_parallelogram->print_info();
	Figure* par_rectangle = &rectangle;
	par_rectangle->print_info();
	Figure* par_square = &square;
	par_square->print_info();
	Figure* par_rombus = &rombus;
	par_rombus->print_info();
	
}

