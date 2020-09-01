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
    int a[10];
    for (int i = 0; i < 10; ++i)
    {
        a[i] = i;
    }

    int b[10];
    for (int i = 0; i < 10; ++i)
    {
        b[i] = a[i];
    }

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}