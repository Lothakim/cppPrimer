#include <iostream>

int main()
{
    int i, &ref_i = i;
    i = 5;
    ref_i = 10;
    std::cout << i << " " << ref_i << std::endl;
    return 0;
}