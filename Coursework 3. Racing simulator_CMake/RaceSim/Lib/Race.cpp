#include <iostream>
#include "Race.h"

std::string Race::getRace_name()
{
    if (race_type == 1) return "Гонка для наземного транспорта.";
    else if (race_type == 2) return "Гонка для воздушного транспорта.";
    else if (race_type == 3) return "Гонка для наземного и воздушного транспорта.";
    else return "Неизвестный тип гонки.";
}

int Race::getRace_distance() { return race_distance; }
void Race::setRace_distance(int a) { race_distance = a; }
void Race::setRace_type(int a) { race_type = a; }

