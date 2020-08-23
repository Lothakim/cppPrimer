#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string temp, concat, concat_space;
    while (cin >> temp)
    {
        concat += temp;
        concat_space += temp + " ";
    }
    cout << concat + '\n' + concat_space << endl;

    return 0;
}