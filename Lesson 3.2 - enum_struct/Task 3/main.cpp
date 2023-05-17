#include <iostream>
#include <Windows.h>

struct adress
{
	std::string city;
	std::string street;
	int house_num;
	int flat_num;
	int index;
};


void print_struct(adress& pers)
{
	std::cout << "�����: " << pers.city << "\n�����: " << pers.street << "\n����� ����: " << pers.house_num << "\n����� ��������: " << pers.flat_num << "\n������: " << pers.index << std::endl << std::endl;
}


int main()
{
	SetConsoleOutputCP(1251);

	adress pers1{ "������", "�����", 12, 8, 123456 };
	adress pers2{ "������", "�������", 59, 143, 953769 };

	print_struct(pers1);
	print_struct(pers2);

}