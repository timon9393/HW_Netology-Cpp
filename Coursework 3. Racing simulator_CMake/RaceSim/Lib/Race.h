#pragma once
#include <iostream>

class Race
{
public:
    std::string getRace_name();
    int getRace_distance();
    void setRace_distance(int a);
    void setRace_type(int a);
    
protected:
    int race_distance, race_type;
};