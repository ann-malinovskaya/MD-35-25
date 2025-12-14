#include <iostream> 
#include "Player.h"

Player::Player() 
{
	k = -1;
}

Player::~Player()
{
}

void Player::setName(std::string& s)
{
	name = s;
}

std::string Player::getName()
{
	return name;
}

int Player::generateNumber()
{
	k *= -1; 
	return k * (std::rand() % 6);
}
