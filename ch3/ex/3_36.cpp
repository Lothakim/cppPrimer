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
    int a1[] = {0, 1, 2};
    int a2[] = {0, 1, 2, 3};
    int *p1 = a1, *p2 = a2;
    while (p1 != end(a1) && p2 != end(a2))
    {
        if (*p1 > *p2)
        {
            cout << "a1 > a2" << endl;
            return 0;
        }
        else if (*p1 < *p2)
        {
            cout << "a1 < a2" << endl;
            return 0;
        }
        else
        {
            ++p1;
            ++p2;
        }
    }
    if (p1 == end(a1) && p2 == end(a2))
    {
        cout << "a1 == a2" << endl;
    }
    else if (p1 == end(a1) && p2 != end(a2))
    {
        cout << "a1 < a2" << endl;
    }
    else
    {
        cout << "a1 > a2" << endl;
    }

    return 0;
}
