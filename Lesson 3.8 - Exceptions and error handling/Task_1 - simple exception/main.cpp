#include <iostream>
#include <Windows.h>

class ForbiddenLength : public std::exception
{
public:
	const char* what() const override { return "�� ����� ����� ��������� �����! �� ��������"; }
};

int function(std::string str, int forbidden_length)
{
	if (str.length() == forbidden_length) throw ForbiddenLength();
	return str.length();
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int forbidden_length;
	std::string str;

	std::cout << "������� ��������� �����: ";
	std::cin >> forbidden_length;

	while (true)
	{
		std::cout << "������� �����: ";
		std::cin >> str;
		try
		{
			std::cout << "����� ����� \"" << str << "\" ����� " << function(str, forbidden_length) << std::endl;
		}
		catch (const ForbiddenLength& bad_length)
		{
			std::cout << bad_length.what() << std::endl;
			break;
		}
	}
}