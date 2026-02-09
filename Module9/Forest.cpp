#include <iostream>

#include "Forest.h"

Forest Forest::operator+(const Forest& other) const
{
	Forest forestUnion;
	forestUnion._trees.reserve(this->_trees.size() + other._trees.size());
	forestUnion._trees.insert(forestUnion._trees.end(), this->_trees.begin(), this->_trees.end());
	forestUnion._trees.insert(forestUnion._trees.end(), other._trees.begin(), other._trees.end());
	return forestUnion;
}

void Forest::growUp(const Tree& tree)
{
	_trees.push_back(tree); 
}

void Forest::cutAll()
{ 
	_trees.clear(); 
}

void Forest::changeID(int newID) 
{ 
	_trees[0]._id = newID; 
}

void Forest::showTrees() const
{
	std::cout << "Forest has " << getTreesNumber() << " trees:\n";
	for (const Tree& tree : _trees)
		tree.wind();
}
