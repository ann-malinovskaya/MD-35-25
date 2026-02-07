#pragma once

#include <string>

class Book
{
public:
	Book(const std::string& title, const std::string& author, int year, const char* ISBN);
	Book(const Book& other);
	~Book();

	const std::string& title() const { return _title; }
	const std::string& author() const { return _author; }
	int year() const { return _year; }
	const char* ISBN() const { return _ISBN; }

	void printInfo() const;

private:
	std::string _title;
	std::string _author;
	int _year;
	char* _ISBN;
};

