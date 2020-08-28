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
    vector<int> vecInt(10);
    for (auto it = vecInt.begin(); it != vecInt.end(); ++it)
    {
        cin >> (*it);
    }

    for (auto it = vecInt.begin(); it != vecInt.end(); ++it)
    {
        (*it) *= 2;
    }

    for (auto it = vecInt.begin(); it != vecInt.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    return 0;
}