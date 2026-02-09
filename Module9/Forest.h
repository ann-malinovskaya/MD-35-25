#pragma once

#include <vector>

#include "Tree.h"

class Forest
{
public:
	Forest operator+(const Forest& other) const;	

	int getTreesNumber() const { return _trees.size(); }
	void growUp(const Tree& tree);
	void cutAll();
	void changeID(int newID);
	void showTrees() const;

private:
	std::vector<Tree> _trees;	
};


