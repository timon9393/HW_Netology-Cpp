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
	std::cout << "������� ����� �����: ";
	std::cin >> pers.number;
	std::cout << "������� ��� ���������: ";
	std::cin >> pers.name;
	std::cout << "������� ������: ";
	std::cin >> pers.balance;
	double new_balance;
	std::cout << "������� ����� ������: ";
	std::cin >> new_balance;

	change_apply(pers, new_balance);
	std::cout << "��� ����: " << pers.name << ", " << pers.number << ", " << pers.balance;

}