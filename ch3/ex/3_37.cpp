#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *p = ca;
    while (*p) // 错误，应使用 p != end(ca)
    {
        cout << *p;
        ++p;
    }
    cout << endl;

    return 0;
}