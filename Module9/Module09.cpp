// Module09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Tree.h"
#include "Forest.h"

int main()
{
    Forest forest1, forest2, forest3;

    forest1.growUp(Tree{ "Oak", TreeTypes::Oak });
    forest1.growUp(Tree{ "Pine", TreeTypes::Pine });
    forest1.growUp(Tree{ "Maple", TreeTypes::Maple });

    forest2.growUp(Tree{ "Oak", TreeTypes::Oak });
    forest2.growUp(Tree{ "Oak", TreeTypes::Oak });
    forest2.growUp(Tree{ "Oak", TreeTypes::Oak });

    forest3.growUp(Tree{ "Cedar", TreeTypes::Cedar });
    forest3.growUp(Tree{ "Maple", TreeTypes::Maple });

    std::cout << "Forest1\n";
    forest1.showTrees();

    std::cout << "\nForest2\n";
    forest2.showTrees();    

    std::cout << "\nForest3\n";
    forest3.showTrees();    

    Forest forest4 = forest1 + forest2;
    std::cout << "\nForest1 + Forest2\n";
    forest4.showTrees();

    forest3.cutAll();
    std::cout << "\nForest3 cutAll\n";
    forest3.showTrees();
}

