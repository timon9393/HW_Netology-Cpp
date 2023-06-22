#pragma once
#include <iostream>
#include "Race.h"

class Vehicle : public Race
{
public:
    Vehicle(int index, int race_type);
    void check();
    std::string getName();
    int getIndex();
    int getSpeed();
    float getRaceTime();
    void setRaceTime(float a);

protected:
    std::string name;
    int speed, index, type;
    float race_time;
};

