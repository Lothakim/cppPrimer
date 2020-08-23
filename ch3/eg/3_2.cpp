#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;
    while (getline(cin, line))
        if (!line.empty() && line.size()>20)       
            cout << line << endl;

    // 为string对象赋值
    string st1(10, 'c'), st2;
    st1 = st2;

    // 两个string对象相加
    string s1 = "hello, ", s2 = "world\n";
    string s3 = s1 + s2;
    s1 += s2;

    // 字面值和string相加
    string s1 = "hello", s2 = "world";
    string s3 = s1 + ", " + s2 +'\n';
    string s4 = s1 + ", ";
    string s5 = "hello" + ", ";         // 错误，两个均不是string
    string s6 = s1 + ", " + "world";    // 正确，(s1 + ", ")为string
    string s7 = "hello" + ", " + s2;    // 错误，字面值无法直接相加

    return 0;
}
