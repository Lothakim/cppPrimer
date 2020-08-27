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
    vector<int> intVec;
    int i;
    while (cin >> i)
    {
        intVec.push_back(i);
    }
    auto len = intVec.size();

    for (decltype(len) i = 0; i < len - 1; i++)
    {
        cout << intVec[i] + intVec[i + 1] << " ";       
    }
    cout << endl;

    for (decltype(len) i = 0; i <= (len - 1) / 2; i++)
    {
        cout << intVec[i] + intVec[len - 1 - i] << " ";
    }
    cout << endl;

    return 0;
}