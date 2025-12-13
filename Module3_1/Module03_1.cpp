// Module03_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <iostream>

enum class TrafficLight { RED, YELLOW, GREEN };

void printLight(TrafficLight light)
{
    switch (light)
    {
    case TrafficLight::RED:     std::cout << "Red" << std::endl; break;
    case TrafficLight::YELLOW:  std::cout << "Yellow" << std::endl; break;
    case TrafficLight::GREEN:   std::cout << "Green" << std::endl; break;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    TrafficLight light = TrafficLight::RED;
    printLight(light);

    std::string str;
    std::cout << "Введите цвет (red, yellow, green): " << std::endl;
    std::cin >> str;

    if (str == "red")
        light = TrafficLight::RED;
    else if (str == "yellow")
        light = TrafficLight::YELLOW;
    else if (str == "green")
        light = TrafficLight::GREEN;
    else
    {
        std::cout << "Некорректный цвет" << std::endl;
        return 0;
    }

    printLight(light);
}


