#pragma once

enum class TreeTypes
{
	Unknown = -1,
	Oak,	//Дуб
	Pine,	//Сосна	
	Maple,	//Клен
	Birch,	//Береза	
	Cedar	//Кедр
};

enum class ForestTypes
{
	Unknown = -1,
	Leaf,	//Лиственный
	Conifer	//Хвойный
};

inline std::string getTreeTypeName(TreeTypes type) 
{
    switch (type) 
    {
    case TreeTypes::Oak:    return "Oak";
    case TreeTypes::Pine:   return "Pine";
    case TreeTypes::Maple:  return "Maple";
    case TreeTypes::Birch:  return "Birch";
    case TreeTypes::Cedar:  return "Cedar";
    default:                return "Unknown";
    }
}

inline ForestTypes getForestType(TreeTypes type) 
{
    switch (type) 
    {
    case TreeTypes::Pine:
    case TreeTypes::Cedar:
        return ForestTypes::Conifer;
    case TreeTypes::Oak:
    case TreeTypes::Maple:
    case TreeTypes::Birch:
        return ForestTypes::Leaf;
    default:
        return ForestTypes::Unknown;
    }
}

inline std::string getForestTypeName(ForestTypes type)
{
    switch (type)
    {
    case ForestTypes::Leaf:     return "Leaf";
    case ForestTypes::Conifer:  return "Conifer";
    default:                    return "Unknown";
    }
}

