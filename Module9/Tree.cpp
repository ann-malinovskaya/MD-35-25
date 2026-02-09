#include <iostream>
#include "Tree.h"

int Tree::_counter = 0;

Tree::Tree(const std::string& name, TreeTypes type) : _name(name), _type(type) 
{
	_id = ++_counter;
}

Tree::Tree(const Tree& other) : _name(other._name), _type(other._type), _id(other._id)
{	
}

Tree::~Tree()
{	
}

void Tree::wind() const
{
	std::cout << "Name: " << _name << "\nID = " << _id << std::endl;
}
