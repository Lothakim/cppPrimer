#include <iostream>
#include "..\Sales_item.h"

int main(){
    Sales_item item_tmp, item_sum;
    if (std::cin >> item_tmp)
    {
        item_sum = item_tmp;
        while (std::cin >> item_tmp)
        {
            item_sum += item_tmp;
        }
    }
    std::cout << item_sum << std::endl;

    return 0;
}

/*
0-201-70353-X 3 20.00
0-201-70353-X 2 25.00
0-201-70353-X 5 20.00
0-201-70353-X 4 24.00
*/

