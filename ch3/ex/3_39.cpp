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
    string s1("Misaka Mikoto");
    string s2("Shokuhou Misaki");
    if (s1 > s2)
    {
        cout << "s1 > s2" << endl;
    }
    else if (s1 < s2)
    {
        cout << "s1 < s2" << endl;
    }
    else
    {
        cout << "s1 == s2" << endl;
    }
    
    const char ca1[] = "Misaka Mikoto";
    const char ca2[] = "Shokuhou Misaki";
    if (strcmp(ca1, ca2) > 0)
    {
        cout << "ca1 > ca2" << endl;
    }
    else if (strcmp(ca1, ca2) < 0)
    {
        cout << "ca1 < ca2" << endl;
    }
    else
    {
        cout << "ca1 == ca2" << endl;
    }
    
    return 0;
}