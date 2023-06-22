#include <iostream>
#include "racing.h"


void racing(Vehicle& arr, Race& race)
{
    if (arr.getIndex() == 1)  // ��������� �������
    {
        int time_constSpeed, countRest, time;  // ����� � ���������� ���������, ���������� ���������, �������� �����
        time_constSpeed = race.getRace_distance() / arr.getSpeed();
        countRest = time_constSpeed / 30;
        if (countRest > 1)
        {
            time = (time_constSpeed % 30 == 0) ? (time_constSpeed + ((countRest - 2) * 8) + 5) : (time_constSpeed + ((countRest - 1) * 8) + 5);
            arr.setRaceTime(time);
        }
        else if (countRest == 1)
        {
            time = (time_constSpeed % 30 == 0) ? time_constSpeed : (time_constSpeed + 5);
            arr.setRaceTime(time);
        }
        else
            arr.setRaceTime(time_constSpeed);
    }
    else if (arr.getIndex() == 2)  // ��������� �������-���������
    {
        int time_constSpeed, countRest;  // ����� � ���������� ���������, ���������� ���������
        float time;  // �������� �����
        time_constSpeed = race.getRace_distance() / arr.getSpeed();
        countRest = time_constSpeed / 10;
        if (countRest > 2)
        {
            time = (time_constSpeed % 10 == 0) ? (time_constSpeed + ((countRest - 3) * 8) + 5 + 6.5) : (time_constSpeed + ((countRest - 2) * 8) + 5 + 6.5);
            arr.setRaceTime(time);
        }
        else if (countRest == 2)
        {
            time = (time_constSpeed % 10 == 0) ? (time_constSpeed + 5) : (time_constSpeed + 5 + 6.5);
            arr.setRaceTime(time);
        }
        else if (countRest == 1)
        {
            time = (time_constSpeed % 10 == 0) ? time_constSpeed : (time_constSpeed + 5);
            arr.setRaceTime(time);
        }
        else
            arr.setRaceTime(time_constSpeed);
    }
    else if (arr.getIndex() == 3)  // ��������� �������-���������
    {
        int time_constSpeed, countRest, time;  // ����� � ���������� ���������, ���������� ���������, �������� �����
        time_constSpeed = race.getRace_distance() / arr.getSpeed();
        countRest = time_constSpeed / 60;
        if (countRest > 1)
        {
            time = (time_constSpeed % 60 == 0) ? (time_constSpeed + ((countRest - 2) * 5) + 10) : (time_constSpeed + ((countRest - 1) * 5) + 10);
            arr.setRaceTime(time);
        }
        else if (countRest == 1)
        {
            time = (time_constSpeed % 60 == 0) ? time_constSpeed : (time_constSpeed + 10);
            arr.setRaceTime(time);
        }
        else
            arr.setRaceTime(time_constSpeed);
    }
    else if (arr.getIndex() == 4) // ��������� ���
    {
        float time;  // �������� �����
        time = (race.getRace_distance() * 0.94) / arr.getSpeed();
        arr.setRaceTime(time);
    }
    else if (arr.getIndex() == 5)  // ��������� �����
    {
        float time, k;  // �������� �����, �����. ���������� ���������
        k = race.getRace_distance() / 1000 / (float)100;
        time = (race.getRace_distance() * (1 - k)) / arr.getSpeed();
        arr.setRaceTime(time);
    }
    else if (arr.getIndex() == 6)  // ��������� �������
    {
        int time_constSpeed, countRest, time;  // ����� � ���������� ���������, ���������� ���������, �������� �����
        time_constSpeed = race.getRace_distance() / arr.getSpeed();
        countRest = time_constSpeed / 8;
        if (countRest > 0)
        {
            time = (time_constSpeed % 8 == 0) ? (time_constSpeed + ((countRest - 1) * 2)) : (time_constSpeed + (countRest * 2));
            arr.setRaceTime(time);
        }
        else
            arr.setRaceTime(time_constSpeed);
    }
    else   // if (arr.getIndex() == 7) ��������� ����-������
    {
        float time;  // �������� �����
        if (race.getRace_distance() < 1000)
        {
            time = race.getRace_distance() / arr.getSpeed();
            arr.setRaceTime(time);
        }
        else if (race.getRace_distance() < 5000 && race.getRace_distance() >= 1000)
        {
            time = (race.getRace_distance() * 0.97) / arr.getSpeed();
            arr.setRaceTime(time);
        }
        else if (race.getRace_distance() < 10000 && race.getRace_distance() >= 5000)
        {
            time = (race.getRace_distance() * 0.9) / arr.getSpeed();
            arr.setRaceTime(time);
        }
        else
        {
            time = (race.getRace_distance() * 0.95) / arr.getSpeed();
            arr.setRaceTime(time);
        }
    }
}