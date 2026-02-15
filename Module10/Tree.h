#pragma once

#include <string>

#include "TreeUtils.h"

class Tree
{
public:
	Tree(const std::string& name, TreeTypes type) : _name(name), _type(type) {}
	Tree(const Tree& other) : _name(other._name), _type(other._type) {}
	virtual ~Tree() = default;

	const std::string& name() const { return _name; }
	TreeTypes type() const { return _type; }
	
	virtual void wind() const = 0;	

protected:
	std::string _name;
	TreeTypes _type;	
};

