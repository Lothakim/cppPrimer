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

    const string s("ajwejkqwe");
    for (auto &c : s)   // c的类型：const char &
    {
        continue;
    }
    
    return 0;
}