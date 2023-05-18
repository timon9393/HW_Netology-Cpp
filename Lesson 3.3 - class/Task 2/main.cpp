#include <iostream>
#include <Windows.h>

class Counter
{
public:
	Counter(int start) { n = start; }

	Counter()
	{
		n = 1;
	}

	void setN(int n)
	{
		this->n = n;
	}

	void plus()
	{
		this->n++;
	}

	void minus()
	{
		this->n--;
	}

	void current()
	{
		std::cout << n << std::endl;
	}

	void count()
	{
		char symbol;
		while (true)
		{
			std::cout << "������� ������� ('+', '-', '=' ��� '�'): ";
			std::cin >> symbol;
			if (symbol == '�') break;
			switch (symbol)
			{
			case '+':
				plus();
				break;
			case '-':
				minus();
				break;
			case '=':
				current();
				break;
			default:
				std::cout << "������������ ���������! ";
				break;
			}
		}
	}


private:
	int n;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::string manual;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� '��' ��� '���': ";
	std::cin >> manual;
	
	if (manual == "��" || manual == "��")
	{
		int start;
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> start;
		Counter num(start);		
		num.count();
		
	}
	else
	{
		Counter num;
		num.count();
	}

	std::cout << "�� ��������!" << std::endl;
	
}