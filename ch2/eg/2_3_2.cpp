#include <iostream>

int main()
{
    int i = 10;
    int *p = &i;
    std::cout << "The address of i: " << &i << std::endl;
    std::cout << "The value of p: " << p << std::endl;
    std::cout << "The address of p: " << &p << std::endl;
}