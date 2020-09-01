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
    vector<int> a;
    for (int i = 0; i < 10; i++)
    {
        a.push_back(i);
    }

    vector<int> b;
    for (auto i : a)
    {
        b.push_back(i);
    }

    for (auto i = b.begin(); i != b.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    
    return 0;
}