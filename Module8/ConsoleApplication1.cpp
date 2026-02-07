// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Book.h"

int main()
{
    Book book1{ "Alice in Wonderland", "Lewis Carroll", 1865, "978-1-4088-0194-0" };
    Book book2 = book1;

    std::cout << "Title: " << book1.title() << "\nAuthor: " << book1.author() 
              << "\nYear: " << book1.year() << "\nISBN: " << book1.ISBN() << std::endl;
    
    book2.printInfo();
 }


