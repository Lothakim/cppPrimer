#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1;
    getline(cin, s1);
    string::size_type i = 0;
    while (i < s1.size())
    {
        s1[i] = 'X';
        i++;
    }
    cout << s1 << endl;

    string s2;
    getline(cin, s2);
    for (decltype(s2.size()) i = 0; i < s2.size(); i++)
    {
        s2[i] = 'X';
    }
    cout << s2 << endl;

    return 0;
}