#pragma once

#include "TreeTemplate.h"

class Oak : public TreeTemplate<Oak> 
{
public:
    Oak(const std::string& name) : TreeTemplate<Oak>(name, TreeTypes::Oak) {}    
};

class Pine : public TreeTemplate<Pine>
{
public:
    Pine(const std::string& name) : TreeTemplate<Pine>(name, TreeTypes::Pine) {}
};


class Maple : public TreeTemplate<Maple>
{
public:
    Maple(const std::string& name) : TreeTemplate<Maple>(name, TreeTypes::Maple) {}
};

class Birch : public TreeTemplate<Birch>
{
public:
    Birch(const std::string& name) : TreeTemplate<Birch>(name, TreeTypes::Birch) {}
};

class Cedar : public TreeTemplate<Cedar>
{
public:
    Cedar(const std::string& name) : TreeTemplate<Cedar>(name, TreeTypes::Cedar) {}
};



