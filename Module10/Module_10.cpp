// Module_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <functional>

#include "Forest.h"
#include "LeafForest.h"
#include "ConiferForest.h"
#include "TreeClasses.h"

int main()
{
    std::unique_ptr<Forest> pLeafForest = std::make_unique<LeafForest>("Leaf Forest");
    std::unique_ptr<Forest> pConiferForest = std::make_unique<ConiferForest>("Conifer Forest");

    pLeafForest->growUp(std::make_unique<Oak>("OakTree"));
    pLeafForest->growUp(std::make_unique<Pine>("PineTree"));
    pLeafForest->growUp(std::make_unique<Maple>("MapleTree"));
    pLeafForest->growUp(std::make_unique<Birch>("BirchTree"));

    pConiferForest->growUp(std::make_unique<Pine>("PineTree"));
    pConiferForest->growUp(std::make_unique<Maple>("MapleTree"));
    pConiferForest->growUp(std::make_unique<Cedar>("CedarTree"));
    
    pLeafForest->wind();
    pConiferForest->wind(); 

    std::vector<std::pair<std::string, std::function<int()>>> treesCount = 
    {
        { "Oak", &Oak::getObjectsCount },
        { "Pine", &Pine::getObjectsCount },
        { "Maple", &Maple::getObjectsCount },
        { "Birch", &Birch::getObjectsCount },
        { "Cedar", &Cedar::getObjectsCount }
    };

    for (const auto& t : treesCount) 
    {
        std::cout << "Number of " << t.first << " trees: " << t.second() << std::endl;
    }
}


