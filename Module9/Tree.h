#pragma once

#include <string>

class Forest;

enum class TreeTypes
{
	Unknown = -1,
	Oak,	//Дуб
	Pine,	//Сосна	
	Maple,	//Клен
	Birch,	//Береза
	Spruce,	//Ель
	Cedar	//Кедр
};

class Tree
{
public:
	Tree(const std::string& name, TreeTypes type);
	Tree(const Tree& other);
	~Tree();

	const std::string& name() const { return _name; }
	int getID() const { return _id; }

	void wind() const;

	static int getObjectsCount() { return _counter; }

	friend class Forest;

private:
	std::string _name;
	TreeTypes _type;
	int _id;

	static int _counter;
};

