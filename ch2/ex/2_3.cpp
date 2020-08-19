#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl; // 4294967264

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u2 << std::endl; // Convert to unsigned: 4294967264
    std::cout << u - i << std::endl;
    
    return 0;
}