#include "solution.h"
#include <iostream>

void Solution::SwapReference(int &a,int &b)
{
    int temp = a;
    a = b;
    b= temp;
    std::cout << "x = " << a<< std::endl;
    std::cout << "y = " << b<< std::endl;
}

void Solution::SwapPointer(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b= temp;
    std::cout << "x = " << *a<< std::endl;
    std::cout << "y = " << *b<< std::endl;
}