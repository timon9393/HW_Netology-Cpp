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
        name = "�������";
        speed = 10;
        type = 1; // ���: �������� ��
        break;
    case 2:
        name = "�������-���������";
        speed = 40;
        type = 1; // ���: �������� ��
        break;
    case 3:
        name = "�������-���������";
        speed = 6;
        type = 1; // ���: �������� ��
        break;
    case 4:
        name = "���";
        speed = 8;
        type = 2; // ���: ��������� ��
        break;
    case 5:
        name = "�����";
        speed = 20;
        type = 2; // ���: ��������� ��
        break;
    case 6:
        name = "�������";
        speed = 15;
        type = 1; // ���: �������� ��
        break;
    case 7:
        name = "����-������";
        speed = 10;
        type = 2; // ���: ��������� ��
        break;
    default:
        break;
    }
    check();
}

void Vehicle::check()
{
    if (index != 1 && index != 2 && index != 3 && index != 4 && index != 5 && index != 6 && index != 7)
        throw MyException("������ ������������� �������� �� ����������!");

    if (type == race_type || race_type == 3) {}
    else throw MyException("������� ���������������� ������������ ��� ����������!");
}

std::string Vehicle::getName() { return name; }
int Vehicle::getIndex() { return index; }
int Vehicle::getSpeed() { return speed; }
float Vehicle::getRaceTime() { return race_time; }
void Vehicle::setRaceTime(float a) { this->race_time = a; }

