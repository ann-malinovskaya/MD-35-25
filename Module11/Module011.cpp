// Module011.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <memory>

#include "Employee.h"
#include "Manager.h"
#include "Developer.h"

int main()
{
    std::vector<std::unique_ptr<Employee>> employers;
    employers.push_back(std::make_unique<Manager>());
    employers.push_back(std::make_unique<Developer>());
    employers.push_back(std::make_unique<Developer>());
    employers.push_back(std::make_unique<Manager>());

    for (const auto& employee : employers) 
    {
        if (Manager* mgr = dynamic_cast<Manager*>(employee.get())) 
        {
            mgr->ManageTeam();
        }
        else if (Developer* dev = dynamic_cast<Developer*>(employee.get())) 
        {
            dev->WriteCode();
        }
    }
}


