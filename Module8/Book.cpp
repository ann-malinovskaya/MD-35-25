#include <iostream>

#include "Book.h"

Book::Book(const std::string& title, const std::string& author, int year, const char* ISBN) :	_title(title),
																								_author(author),
																								_year(year)
{
    if (ISBN) 
    {
        size_t size = std::strlen(ISBN);
        _ISBN = new char[size + 1]; 
        strcpy_s(_ISBN, size + 1, ISBN);
    }
    else 
    {
        _ISBN = nullptr;
    }
}

Book::Book(const Book& other)
{
    _title = other._title;
    _author = other._author;
    _year = other._year;
    if (other._ISBN) 
    {
        size_t size = std::strlen(other._ISBN);
        _ISBN = new char[size + 1];
        strcpy_s(_ISBN, size + 1, other._ISBN);
    }
    else 
    {
        _ISBN = nullptr;
    }
}

Book::~Book()
{
    delete[] _ISBN;
}

void Book::printInfo() const
{
    std::cout << "Title: " << _title << "\nAuthor: " << _author << "\nYear: " << _year << "\nISBN: " << _ISBN << std::endl;
}
