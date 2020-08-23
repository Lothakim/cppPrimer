#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;      // c: int
    decltype((b)) d = a;    // d: int &，绑定a
    decltype(a = b) e = a;  // e: int &，绑定a
    ++c;
    ++d;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e << std::endl;

    return 0;
}