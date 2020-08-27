#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

#define VNAME(value)(#value)

void printVecInt(vector<int> vecInt);
void printVecStr(vector<string> vecStr);

int main()
{
    vector<int> v1;
    printVecInt(v1);

    vector<int> v2(10);
    printVecInt(v2);

    vector<int> v3(10, 42);
    printVecInt(v3);

    vector<int> v4{10};
    printVecInt(v4);

    vector<int> v5{10, 42};
    printVecInt(v5);

    vector<string> v6{10};
    printVecStr(v6);

    vector<string> v7{10, "hi"};
    printVecStr(v7);

    return 0;
}

void printVecInt(vector<int> vecInt)
{
    cout << "size: " << vecInt.size() << endl;
    for (auto i : vecInt)
    {
        cout << i << " ";
    }
    cout << endl;
}

void printVecStr(vector<string> vecStr)
{
    cout << "size: " << vecStr.size() << endl;
    for (auto c : vecStr)
    {
        cout << c << " ";
    }
    cout << endl;
}