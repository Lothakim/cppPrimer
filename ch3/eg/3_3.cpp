#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> v2;
    for (int i = 0; i != 100; i++)
    {
        v2.push_back(i);
    }

    string word;
    vector<string> text;
    while (cin >> word)
    {
        text.push_back(word);
    }
    
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for (auto &i : v)
    {
        i *= i;
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++scores[grade/10];
        }
    }
    
}