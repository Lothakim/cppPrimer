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
#include <string.h>

int main()
{
    vector<int> iVec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int sz = iVec.size();
    int a[sz];
    for (decltype(iVec.size()) i = 0; i < sz; ++i)
    {
        a[i] = iVec[i];
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}