#include <iostream>
#include "Race.h"

std::string Race::getRace_name()
{
    if (race_type == 1) return "����� ��� ��������� ����������.";
    else if (race_type == 2) return "����� ��� ���������� ����������.";
    else if (race_type == 3) return "����� ��� ��������� � ���������� ����������.";
    else return "����������� ��� �����.";
}

int Race::getRace_distance() { return race_distance; }
void Race::setRace_distance(int a) { race_distance = a; }
void Race::setRace_type(int a) { race_type = a; }

