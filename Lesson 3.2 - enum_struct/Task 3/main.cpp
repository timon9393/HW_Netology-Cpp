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
	std::cout << "Город: " << pers.city << "\nУлица: " << pers.street << "\nНомер дома: " << pers.house_num << "\nНомер квартиры: " << pers.flat_num << "\nИндекс: " << pers.index << std::endl << std::endl;
}


int main()
{
	SetConsoleOutputCP(1251);

	adress pers1{ "Москва", "Арбат", 12, 8, 123456 };
	adress pers2{ "Ижевск", "Пушкина", 59, 143, 953769 };

	print_struct(pers1);
	print_struct(pers2);

}