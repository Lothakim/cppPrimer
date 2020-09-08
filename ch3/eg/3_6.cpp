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
    int a[3][4] = {1, 2, 3, 4, 5, 6 , 7, 8, 9, 10, 11, 12};
    int (*p)[4] = a;
    int (&row)[4] = a[1];
    cout << *(*(p + 1) + 1) << endl;
    cout << row[1] << endl;
    p = &a[2];
    cout << **p << endl;

    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    for (size_t i = 0; i != rowCnt; ++i)
    {
        for (size_t j = 0; j != colCnt; ++j)
        {
            ia[i][j] = i * colCnt + j;
        }
    }
    
    size_t cnt = 0;
    for (auto &row : ia)
    {
        for (auto &col : row)
        {
            col = cnt++;
        }
    }

    for (const auto &row : ia)  //若不使用&，则row的类型会变为int *，在内层循环中无法被遍历
    {
        for (auto col : row)
        {
            cout << col << endl;
        }
    }
    
    //指针和多维数组
    for (auto p = ia; p != ia + 3; ++p)
    {
        for (auto q = *p; q != *p + 4; ++q)
        {
            cout << *q << ' ';
        }
        cout << endl;
    }
    // 用迭代器，代码更简洁
    for (auto p = begin(ia); p != end(ia); ++p)
    {
        for (auto q = begin(*p); q != end(*p); ++q)
        {
            cout << *q << ' ';
        }
        cout << endl;
    }
    

    return 0;
}