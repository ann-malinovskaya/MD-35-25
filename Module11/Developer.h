#pragma once

#include "Employee.h"

#include <iostream>

class Developer : public Employee
{ 
public:
	void WriteCode() { std::cout << "Developer::WriteCode()\n"; }
};
