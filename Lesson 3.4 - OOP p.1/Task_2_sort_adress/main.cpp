#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>


class address
{
public:
	address(std::string city, std::string street, int house, int flat)
	{
		this->city = city;
		this->street = street;
		this->house = house;
		this->flat = flat;
	}

	std::string getCity()
	{
		return city;
	}
	std::string getStreet()
	{
		return street;
	}

	std::string get_output_address()
	{
		return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat);
	}


private:
	std::string city, street;
	int house, flat;
};

void sort(address** addresses, int n)
{
	bool swapped;
	do
	{
		swapped = false;
		for (int i = 0; i < n-1; i++)
		{
			if (addresses[i]->getCity() > addresses[i + 1]->getCity())
			{
				std::swap(addresses[i], addresses[i + 1]);
				swapped = true;
			}
			else if (addresses[i]->getCity() == addresses[i + 1]->getCity())
			{
				if (addresses[i]->getStreet() > addresses[i + 1]->getStreet())
				{
					std::swap(addresses[i], addresses[i + 1]);
					swapped = true;
				}
			}
		}
	} while (swapped);	
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::ifstream fin("in.txt");
	
	if (fin.is_open())
	{
		int n;
		fin >> n;

		address** addresses = new address*[n];
		for (int i = 0; i < n; i++)
		{
			std::string city, street;
			int house, flat;
			fin >> city >> street;
			fin >> house >> flat;

			addresses[i] = new address(city, street, house, flat);
		}

		sort(addresses, n);

		std::ofstream fout("out.txt");

		fout << n << std::endl;
		for (int i = 0; i < n; i++)
		{
			fout << addresses[i]->get_output_address() << std::endl;
		}

		///////////

		for (int i = 0; i < n; i++)
		{
			delete[] addresses[i];
		}
		delete[] addresses;
		fin.close();
		fout.close();
	}
	else
	{
		std::cout << "Не удалось открыть файл";
	}
	
	
}