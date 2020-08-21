#include <iostream>

int main()
{
    typedef char *pstring;      // 指向char的指针

    const pstring sctr = 0;     // 指向char的常量指针
    const char *ptr = 0;        // 指向char常量的指针
    const pstring *ps = &sctr;

    const char *s = "fuck you!";
    // const pstring p1 = s; 错误
    const pstring p2 = "fuck you!";

    char c = 'a';
    pstring x = &c;
    pstring y = "hello";
    char *z = x;

    char *p = "motherfucker";
    pstring q = p;
    
    return 0;
}