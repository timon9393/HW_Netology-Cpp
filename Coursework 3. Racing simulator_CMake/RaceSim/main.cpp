#include<iostream>
#include<Windows.h>
#include<vector>
#include "Exception.h"
#include "Race.h"
#include "racing.h"
#include "sort.h"
#include "Vehicle.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    Race race;
    std::vector<Vehicle> arr;
    int index, menu, ending;
	int race_type, race_distance;
	std::cout << "����� ���������� � �������� ���������!" << std::endl;        
    while(true)
    {
        while (true)
        {
            std::cout << "\n1. ����� ��� ��������� ����������\n2. ����� ��� ���������� ����������\n3. ����� ��� ��������� � ���������� ����������" << std::endl;
            std::cout << "�������� ��� �����: ";
            std::cin >> race_type;
            if (race_type == 1 || race_type == 2 || race_type == 3) break;
            else
                std::cout << "\n����������� ��� �����!" << std::endl;
        }
        race.setRace_type(race_type);  // ��������� ���� �����
        do
        {
            std::cout << "������� ����� ��������� (������ ���� ������������): ";
            std::cin >> race_distance;
        } while (race_distance <= 0);        
        race.setRace_distance(race_distance);  // ��������� ��������� �����
        while (true)
        {
            if (arr.size() < 2) // ���� ���������� < 2
            {
                while (true)
                {
                    std::cout << std::endl << "������ ���� ���������������� ���� �� 2 ������������ ��������!" << std::endl;
                    std::cout << "1. ���������������� ���������." << std::endl;
                    std::cout << "�������� ��������: ";
                    std::cin >> menu;
                    if (menu != 1)
                    {
                        std::cout << "\n������������ ��������!" << std::endl;
                        continue;
                    }
                    break;
                }
            }
            else  // ���� ���������� >= 2
            {
                while (true)
                {
                    std::cout << std::endl << "1. ���������������� ���������." << std::endl;
                    std::cout << "2. ������ �����." << std::endl;
                    std::cout << "�������� ��������: ";
                    std::cin >> menu;
                    if (menu != 1 && menu != 2)
                    {
                        std::cout << "\n������������ �������� � ����!" << std::endl;
                        continue;
                    }
                    break;
                }
            }
            if (menu == 1)  // ����������� ����� ����������
            {
                for (int i = arr.size(); i < 7;)
                {
                    std::cout << std::endl << race.getRace_name() << " ����������: " << race.getRace_distance() << std::endl;
                    if (!arr.empty())
                    {
                        std::cout << "������������������ ������������ ��������: ";
                        for (int i = 0; i < arr.size(); i++)
                        {
                            if (i == arr.size() - 1)
                            {
                                std::cout << arr[i].getName() << std::endl;
                            }
                            else
                            {
                                std::cout << arr[i].getName() << ", ";
                            }
                        }
                    }
                    std::cout << "1. �������\n2. �������-���������\n3. �������-���������\n4. ���\n5. �����\n6. �������\n7. ����-������\n0. ��������� �����������" << std::endl;
                    std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
                    std::cin >> index;
                    if (index == 0) break;
                    try
                    {
                        arr.push_back(Vehicle(index, race_type));
                    }
                    catch (const MyException& ex)
                    {
                        std::cout << std::endl << ex.what() << std::endl;
                        continue;
                    }

                    bool isDouble = false;
                    if (i > 0)
                    {
                        for (int j = 0; j < i; j++)
                        {
                            if (arr[j].getIndex() == arr[i].getIndex())
                            {
                                std::cout << "\n����� �������� ��� �������" << std::endl;
                                isDouble = true;
                                arr.pop_back();
                                break;
                            }
                        }
                    }
                    if (isDouble) continue;
                    std::cout << std::endl << arr[i].getName() << " ������� ���������������!" << std::endl;
                    i++;
                }
            }
            else if (menu == 2)  // ������ �����
            {
                for (int i = 0; i < arr.size(); i++)
                {
                    racing(arr[i], race);
                }
                sort_result(arr);
                std::cout << "\n���������� �����:" << std::endl;
                for (int i = 0; i < arr.size(); i++)
                {
                    std::cout << i+1 << ". " << arr[i].getName() << ". �����: " << arr[i].getRaceTime() << std::endl;
                }
                break;
            }
        }
        std::cout << "\n1. �������� ��� ���� �����\n2. �����" << std::endl;
        std::cout << "�������� ��������: ";
        std::cin >> ending;
        if (ending == 1)
        {
            arr.clear();
            continue;
        }
        else break;
    }    

    std::cout << "\n�� ��������!" << std::endl;
    system("pause");


}