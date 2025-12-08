// Module02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << endl;

    cout << boolalpha;  // включаем отображение логических значений как true/false

    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " sizeof(a) = " << sizeof(a) << endl;
    cout << " sizeof(b) = " << sizeof(b) << endl;
    cout << " a + b = " << a + b << endl;
    cout << " a - b = " << a - b << endl;
    cout << " a * b = " << a * b << endl << endl;
    
    cout << " (a == b) = " << (a == b) << endl;
    cout << " (a != b) = " << (a != b) << endl;
    cout << " (a > b) = " << (a > b) << endl;
    cout << " (a < b) = " << (a < b) << endl;
    cout << " (a >= b) = " << (a >= b) << endl;
    cout << " (a <= b) = " << (a <= b) << endl << endl;

    cout << " a & b = " << (a & b) << endl;
    cout << " a | b = " << (a | b) << endl;
    cout << " a ^ b = " << (a ^ b) << endl;
    cout << " ~a = " << (~a) << endl << endl;

    cout << " a << 2 = " << (a << 2) << endl;
    cout << " b >> 1 = " << (b >> 1) << endl;

    return 0;
}

