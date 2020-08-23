#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    // 比较两个字符串的大小
    if (s1 == s2)   
    {
        cout << "The two strings are equal: " + s1 << endl;
    }
    else if (s1 > s2)
    {
        cout << "The bigger one is: " + s1 << endl;
    }
    else
    {
        cout << "The bigger one is: " + s2 << endl;
    }
    
    // 比较两个字符串的长度
    if (s1.size() == s2.size())
    {
        cout << "The length of the two strings are equal: " + s1 <<endl;
    }
    else if (s1.size() > s2.size())
    {
        cout << "The longer one is: " << s1 << endl;
    }
    else
    {
        cout << "The longer one is: " << s2 << endl;
    }
    
    return 0;
}