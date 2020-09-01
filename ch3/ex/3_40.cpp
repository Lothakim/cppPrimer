#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
#include <string.h>

int main()
{
    const char s1[] = "Misaka";
    const char s2[] = "Mikoto";
    char s[100];

    strcpy(s, s1);
    strcat(s, " ");
    strcat(s, s2);
    cout << s << endl;
    
    return 0;
}