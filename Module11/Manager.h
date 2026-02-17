#pragma once

#include <iostream>

#include "Employee.h"

class Manager : public Employee
{
public:
	void ManageTeam() { std::cout << "Manager::ManageTeam()\n"; }
};