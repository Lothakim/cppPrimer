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
    vector<int> text{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sought = 3;
    auto beg = text.begin(), end = text.end();
    auto mid = beg + (end - beg) / 2;
    while ((mid != end) && ((*mid) != sought))
    {
        if (sought < (*mid))
        {
            end = mid;
        }
        else
        {
            beg= mid + 1;
        }
        mid = beg + (end - beg) / 2; // 不用(beg+end)/2的原因是防止beg+end值溢出
    }
    
    return 0;
}