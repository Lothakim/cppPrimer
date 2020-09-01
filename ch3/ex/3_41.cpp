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
    const int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> aVec(begin(a), end(a));
   for (auto i : aVec)
   {
       cout << i << " ";
   }
    cout << endl;

    return 0;
}