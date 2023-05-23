#include <iostream>
#include <Windows.h>
#include <fstream>
#include <algorithm>
#include <string>


class Address
{
public:
	Address(std::string city, std::string street, int n_house, int n_flat)
	{
		this->city = city;
		this->street = street;
		this->n_house = n_house;
		this->n_flat = n_flat;
	}
	

	std::string get_output_address()
	{
		return city + ", " + street + ", " + std::to_string(n_house) + ", " + std::to_string(n_flat);
	}

private:
	std::string city, street;
	int n_house, n_flat;

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::ifstream fin("in.txt");
	if (fin.is_open())
	{
		int n;
		fin >> n;
		Address** arr_adr = new Address*[n];

		for (int i = 0; i < n; i++)
		{
			std::string city, street;
			int n_house, n_flat;
			fin >> city >> street;
			fin >> n_house >> n_flat;
			arr_adr[i] = new Address(city, street, n_house, n_flat);
		}
		
		std::ofstream fout("out.txt");

		std::reverse(arr_adr, arr_adr + n);

		fout << n << std::endl;
		for (int i = 0; i < n; i++)
		{
			fout << arr_adr[i]->get_output_address() << std::endl;
		}
		
		for (int i = 0; i < n; i++)
		{
			delete[] arr_adr[i];
		}
		delete[] arr_adr;
		fin.close();
		fout.close();
	}
	else
	{
		std::cout << "Не удалось открыть файл";
	}
}