#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void printVecUns(vector<unsigned> vecUns);

int main()
{
    vector<unsigned> scores(11, 0);
    auto begin = scores.begin();
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++(*(begin + grade / 10));
        }
    }
    printVecUns(scores);

    return 0;
}

void printVecUns(vector<unsigned> vecUns)
{
    for (auto it = vecUns.begin(); it != vecUns.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}