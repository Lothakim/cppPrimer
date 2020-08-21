#include <iostream>

int main()
{
    int x1 = 0, x2 = 1;
    int *p1 = &x1, *p2 = &x2;
    *p1 = 1;
    *p2 = 2;
    std::cout << x1 << " " << x2 << std::endl;
    p2 = p1;
    *p2 = 3;
    std::cout << x1 << " " << x2 << std::endl;

    return 0;
}