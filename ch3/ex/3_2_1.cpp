#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;

    cout << "Input a whole row at a time: " << endl;
    while (getline(cin, line))
    {
        cout << line << endl;
    }

    return 0;
}