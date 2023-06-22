#include "sort.h"
#include <iostream>
#include <vector>

void sort_result(std::vector<Vehicle>& arr)  // Сортировка по лидерам гонки
{
    bool swapped = false;
    do
    {
        swapped = false;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i - 1].getRaceTime() > arr[i].getRaceTime())
            {
                Vehicle temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}