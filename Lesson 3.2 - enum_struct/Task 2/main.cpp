#include <iostream>
#include <Windows.h>

struct account
{
	int number;
	std::string name;
	double balance;
};

void change_apply(account& p, double& balance)
{
	p.balance = balance;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	account pers;
	std::cout << "¬ведите номер счЄта: ";
	std::cin >> pers.number;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> pers.name;
	std::cout << "¬ведите баланс: ";
	std::cin >> pers.balance;
	double new_balance;
	std::cout << "¬ведите новый баланс: ";
	std::cin >> new_balance;

	change_apply(pers, new_balance);
	std::cout << "¬аш счЄт: " << pers.name << ", " << pers.number << ", " << pers.balance;

}