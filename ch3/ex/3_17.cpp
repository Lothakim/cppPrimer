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
    vector<string> wordVec;
    string word;
    while (cin >> word)
    {
        wordVec.push_back(word);
    }
    
    for (auto &word : wordVec)
    {
        for (auto &c : word)
        {
            c = toupper(c);
        }
    }
    
    for (auto &word : wordVec)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}