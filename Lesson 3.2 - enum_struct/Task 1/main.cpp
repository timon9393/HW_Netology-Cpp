#include <iostream>

enum month
{
	january = 1,
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	october,
	november,
	december
};

int main()
{
	setlocale(LC_ALL, "ru");
	int n = 1;
	
	while(true)
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> n;
		if (n == 0)
		{
			std::cout << "До свидания" << std::endl;
			break;
		}
		month enter_m = static_cast<month>(n);
		switch (enter_m)
		{
		case january:
			std::cout << "Январь" << std::endl;
			break;
		case february:
			std::cout << "Февраль" << std::endl;
			break;
		case march:
			std::cout << "Март" << std::endl;
			break;
		case april:
			std::cout << "Апрель" << std::endl;
			break;
		case may:
			std::cout << "Май" << std::endl;
			break;
		case june:
			std::cout << "Июнь" << std::endl;
			break;
		case july:
			std::cout << "Июль" << std::endl;
			break;
		case august:
			std::cout << "Август" << std::endl;
			break;
		case september:
			std::cout << "Сентябрь" << std::endl;
			break;
		case october:
			std::cout << "Октябрь" << std::endl;
			break;
		case november:
			std::cout << "Ноябрь" << std::endl;
			break;
		case december:
			std::cout << "Декабрь" << std::endl;
			break;
		default:
			std::cout << "Неправильный номер!" << std::endl;
			break;
		}
	}
	


}