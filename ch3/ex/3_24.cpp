#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> vecInt;
    int integer;

    while (cin >> integer)
    {
        vecInt.push_back(integer);
    }
    
    for (auto it = vecInt.begin() + 1; it != vecInt.end(); ++it)
    {
        cout << *it + *(it - 1) << " ";
    }
    cout << endl;

    for (auto it_begin = vecInt.begin(), it_end = vecInt.end() - 1;
        it_begin <= it_end; ++it_begin, --it_end)
    {
        cout << *it_begin + *it_end << " ";
    }
    cout << endl;

    return 0;
}