#include "func.hpp"
#include <iostream>

void Read(int mas[10000], int& n)
{
    std::cin >> n;
    for(int i = 0; i < n; i++)
        std::cin >> mas[i];
}

