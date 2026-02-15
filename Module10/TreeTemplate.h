#pragma once

#include <iostream>

#include "Tree.h"

template<typename Derived>
class TreeTemplate : public Tree 
{
public:    
    TreeTemplate(const std::string& name, TreeTypes type) : Tree(name, type)  
    {
        ++_counter;        
    }   

    static int getObjectsCount() { return _counter; }    

    void wind() const override
    {
        std::cout << getTreeTypeName(_type) << " Tree \"" << _name << "\"\n";
    }

private:
    static int _counter;
};

template<typename Derived>
int TreeTemplate<Derived>::_counter = 0;


