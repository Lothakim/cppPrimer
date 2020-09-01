#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int a[10] = {0, 1, 2, 4, 5, 6, 7, 8, 9};
    int *p = a, *e = &a[10];
    while (p != e)
    {
        *p = 0;
        ++p;
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}