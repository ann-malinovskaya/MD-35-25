// Module03_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Player.h"

void playerTurn(Player& player, int& counter)
{
    int number = player.generateNumber();
    std::cout << player.getName() << ": " << number << std::endl;
    counter += number;
    std::cout << "Счетчик = " << counter << std::endl;
    if (counter > 50) 
    {
        std::cout << "Победитель: " << player.getName() << "!" << std::endl;
        exit(0); 
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    std::srand(std::time(nullptr)); 

    Player player1, player2;
    std::string s;

    std::cout << "Введите имя первого игрока: " << std::endl;
    std::cin >> s;
    player1.setName(s);

    std::cout << "Введите имя второго игрока: " << std::endl;
    std::cin >> s;
    player2.setName(s);

    int counter = 0;
    int stepCount = 0;
    
    std::cout << "Старт!" << std::endl;

    while (true)
    {
        stepCount++;
        std::cout << "Ход " << stepCount << std::endl;

        playerTurn(player1, counter);
        playerTurn(player2, counter);
        
        if (stepCount >= 100)
        {
            std::cout << "Ничья!" << std::endl;
            break;
        }
    }    
}


