#include<iostream>

int main()
{
    int val = 0, sum = 0;
    while (std::cin >> val)
    {
        sum += val;
    }
    std::cout << "The sum of all input intergers is: " << sum << std::endl;
    return 0;
}
