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
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;        
    while(true)
    {
        while (true)
        {
            std::cout << "\n1. Гонка для наземного транспорта\n2. Гонка для воздушного транспорта\n3. Гонка для наземного и воздушного транспорта" << std::endl;
            std::cout << "Выберите тип гонки: ";
            std::cin >> race_type;
            if (race_type == 1 || race_type == 2 || race_type == 3) break;
            else
                std::cout << "\nНеизвестный тип гонки!" << std::endl;
        }
        race.setRace_type(race_type);  // Установка типа гонки
        do
        {
            std::cout << "Укажите длину дистанции (должна быть положительна): ";
            std::cin >> race_distance;
        } while (race_distance <= 0);        
        race.setRace_distance(race_distance);  // Установка дистанции гонки
        while (true)
        {
            if (arr.size() < 2) // Если участников < 2
            {
                while (true)
                {
                    std::cout << std::endl << "Должно быть зарегистрировано хотя бы 2 транспортных средства!" << std::endl;
                    std::cout << "1. Зарегистрировать транспорт." << std::endl;
                    std::cout << "Выберите действие: ";
                    std::cin >> menu;
                    if (menu != 1)
                    {
                        std::cout << "\nНеправильное действие!" << std::endl;
                        continue;
                    }
                    break;
                }
            }
            else  // Если участников >= 2
            {
                while (true)
                {
                    std::cout << std::endl << "1. Зарегистрировать транспорт." << std::endl;
                    std::cout << "2. Начать гонку." << std::endl;
                    std::cout << "Выберите действие: ";
                    std::cin >> menu;
                    if (menu != 1 && menu != 2)
                    {
                        std::cout << "\nНеправильное действие в меню!" << std::endl;
                        continue;
                    }
                    break;
                }
            }
            if (menu == 1)  // Регистрация новых участников
            {
                for (int i = arr.size(); i < 7;)
                {
                    std::cout << std::endl << race.getRace_name() << " Расстояние: " << race.getRace_distance() << std::endl;
                    if (!arr.empty())
                    {
                        std::cout << "Зарегистрированные транспортные средства: ";
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
                    std::cout << "1. Верблюд\n2. Верблюд-быстроход\n3. Ботинки-вездеходы\n4. Орёл\n5. Метла\n6. Кентавр\n7. Ковёр-самолёт\n0. Закончить регистрацию" << std::endl;
                    std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
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
                                std::cout << "\nТакое значение уже введено" << std::endl;
                                isDouble = true;
                                arr.pop_back();
                                break;
                            }
                        }
                    }
                    if (isDouble) continue;
                    std::cout << std::endl << arr[i].getName() << " успешно зарегистрирован!" << std::endl;
                    i++;
                }
            }
            else if (menu == 2)  // Начало гонки
            {
                for (int i = 0; i < arr.size(); i++)
                {
                    racing(arr[i], race);
                }
                sort_result(arr);
                std::cout << "\nРезультаты гонки:" << std::endl;
                for (int i = 0; i < arr.size(); i++)
                {
                    std::cout << i+1 << ". " << arr[i].getName() << ". Время: " << arr[i].getRaceTime() << std::endl;
                }
                break;
            }
        }
        std::cout << "\n1. Провести ещё одну гонку\n2. Выйти" << std::endl;
        std::cout << "Выберите действие: ";
        std::cin >> ending;
        if (ending == 1)
        {
            arr.clear();
            continue;
        }
        else break;
    }    

    std::cout << "\nДо свидания!" << std::endl;
    system("pause");


}