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
    string s("some string");
    if (s.begin() != s.end())
    {
        auto it = s.begin();
        *it = toupper(*it);
    }
    
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    {
        *it = toupper(*it);
    }

    vector<int> v;
    const vector<int> cv;
    auto it1 = v.begin();   // vector<int>::iterator
    auto it2 = cv.begin();  // vector<int>::const_iterator
    auto it3 = v.cbegin();  // vector<int>::const_iterator
}