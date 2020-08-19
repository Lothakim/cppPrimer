#include<iostream>

int main()
{
    int start = 10, end = 0;
    std::cout << "The numbers between " << start << " and " << end << " is: " <<std::endl;
    for (int i = start; i >= end; i--)
    {
        std::cout << i << std::endl;
    }
    
}