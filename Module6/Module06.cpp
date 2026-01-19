// Module06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <iostream>
#include <vector>

int findMax(const int* arr, size_t size)
{
    int max = arr[0];
    for (size_t i = 1; i < size; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void consume(std::unique_ptr<int> p)
{
    std::cout << *p << std::endl;
    *p += 1;
    std::cout << *p << std::endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    size_t n;
    std::cout << "Задание 1:\nВведите размер массива:\n";
    std::cin >> n;

    int* arr = new int[n];
    std::cout << "\nМассив:\n";
    for (size_t i = 0; i < n; ++i)
    {
        arr[i] = i + 1;
        std::cout << arr[i] << std::endl;
    }

    std::cout << "\nЗадание 2:\nМаксимальный элемент массива: " << findMax(arr, n) << std::endl;
    delete[] arr;

    int a, b;
    std::cout << "\nЗадание 3:\nВведите a: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;    
    swap(&a, &b);
    std::cout << "После swap(a,b):\na = " << a << "\nb = " << b << std::endl;

    std::vector<int> v;
    int sum{ 0 };
    std::cout << "\nЗадание 4:\nВведите последовательность чисел (0 - конец ввода)\n";
    do
    {
        std::cin >> a;
        if (a == 0)
            break;
        v.push_back(a);
        sum += a;
    } 
    while (true);
    double avg = (sum + 0.0) / v.size();
    std::cout << "Среднее арифметическое: " << avg << std::endl;

    std::cout << "\nЗадание 5:\nВведите число: ";
    std::cin >> a;
    auto ptr = std::make_unique<int>(a);
    consume(std::move(ptr));
}


