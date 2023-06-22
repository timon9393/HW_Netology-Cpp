#include <iostream>
#include "Vehicle.h"
#include "Exception.h"

Vehicle::Vehicle(int index, int race_type)
{
    this->race_type = race_type;
    this->index = index;
    switch (index)
    {
    case 1:
        name = "Верблюд";
        speed = 10;
        type = 1; // Тип: наземное ТС
        break;
    case 2:
        name = "Верблюд-быстроход";
        speed = 40;
        type = 1; // Тип: наземное ТС
        break;
    case 3:
        name = "Ботинки-вездеходы";
        speed = 6;
        type = 1; // Тип: наземное ТС
        break;
    case 4:
        name = "Орёл";
        speed = 8;
        type = 2; // Тип: воздушное ТС
        break;
    case 5:
        name = "Метла";
        speed = 20;
        type = 2; // Тип: воздушное ТС
        break;
    case 6:
        name = "Кентавр";
        speed = 15;
        type = 1; // Тип: наземное ТС
        break;
    case 7:
        name = "Ковёр-самолёт";
        speed = 10;
        type = 2; // Тип: воздушное ТС
        break;
    default:
        break;
    }
    check();
}

void Vehicle::check()
{
    if (index != 1 && index != 2 && index != 3 && index != 4 && index != 5 && index != 6 && index != 7)
        throw MyException("Такого транспортного средства не существует!");

    if (type == race_type || race_type == 3) {}
    else throw MyException("Попытка зарегистрировать неправильный тип транспорта!");
}

std::string Vehicle::getName() { return name; }
int Vehicle::getIndex() { return index; }
int Vehicle::getSpeed() { return speed; }
float Vehicle::getRaceTime() { return race_time; }
void Vehicle::setRaceTime(float a) { this->race_time = a; }

