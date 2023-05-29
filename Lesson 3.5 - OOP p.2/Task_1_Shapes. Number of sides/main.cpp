#include <iostream>
#include <Windows.h>


class Figure
{
public:
	int get_sides_count()
	{
		return sides_count;
	}
	std::string get_name()
	{
		return name;
	}

protected:
	int sides_count = 0;
	std::string name = "Фигура";


};

class Triangle : public Figure
{
public:
	Triangle(int a)
	{
		sides_count = a;
		name = "Треугольник";
	}
};

class Quadrangle : public Figure
{
public:
	Quadrangle(int a)
	{
		name = "Четырёхугольник";
		sides_count = 4;
	}

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::cout << "Количество сторон: " << std::endl;

	Figure figure;
	std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;

	Triangle triangle(3);
	std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;

	Quadrangle quadrangle(4);
	std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;


}

	