#include<iostream>

int main()
{
    int start = 10, end = 0, n = start;
    std::cout << "The numbers between " << start << " and " << end << " is: " <<std::endl;
    while (n >= end)
    {
        std::cout << n << std::endl;
        --n;
    }
    
    return 0;
}