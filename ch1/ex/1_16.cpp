#include<iostream>

int main()
{
    int sum = 0, val = 0;
    for ( ; std::cin >> val; )
    {
        sum += val;
    }
    std::cout << "The sum of all input intergers is: " << sum << std::endl;
    return 0;
}