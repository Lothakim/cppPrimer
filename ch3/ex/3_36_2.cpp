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
    vector<int> a1{0, 1, 2, 3};
    vector<int> a2{0, 1, 2, 3};
    auto p1 = a1.begin(), p2 = a2.begin();
    while (p1 != a1.end() && p2 != a2.end())
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
    if (p1 == a1.end() && p2 == a2.end())
    {
        cout << "a1 == a2" << endl;
    }
    else if (p1 == a1.end() && p2 != a2.end())
    {
        cout << "a1 < a2" << endl;
    }
    else
    {
        cout << "a1 > a2" << endl;
    }
    
    return 0;
}