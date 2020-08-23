#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word;
    
    cout << "Input a single word at a time: " << endl;
    while (cin >> word)
    {
        cout << word << endl;
    }
    return 0;
}