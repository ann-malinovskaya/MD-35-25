#pragma once
#include <iostream> 

class Player
{
public:
	Player();
	~Player();

	void setName(std::string&);
	std::string getName();

	int generateNumber();

private:
	int k; 
	std::string name;
};
