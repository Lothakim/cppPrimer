#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, temp("");
    getline(cin, s);
    for (auto c : s)
    {
        if (!ispunct(c))
        {
            temp+= c;
        }
    }
    s = temp;
    cout << s << endl;

    return 0;
}