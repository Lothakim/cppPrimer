#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // 统计标点符号数量
    string s1("Hello world!!!");
    decltype(s1.size()) punct_cnt = 0;   // string::size_type
    for (auto c : s1)
    {
        if (ispunct(c))
        {
            ++punct_cnt;
        }
    }
    cout << punct_cnt << " punctuation characters in " + s1 <<endl;

    // 所有字母转换为大写
    string s2("Hello world!!!");
    for (auto &c : s2)  // c是一个引用，赋值语句将改变与c绑定的字符的值
    {
        c = toupper(c);
    }
    cout << s2 << endl;

    // 第一个单词改为大写
    string s3("Hello world!!!");
    for (decltype(s3.size()) index = 0; index != s3.size() && !isspace(s3[index]); ++index)
    {
        s3[index] = toupper(s3[index]);
    }
    cout << s3 << endl;
    
    return 0;
}