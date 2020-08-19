#include <iostream>
#include "..\Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;

    return 0;
}

/*
0-201-70353-X 3 20.00
0-201-70353-X 2 25.00
*/