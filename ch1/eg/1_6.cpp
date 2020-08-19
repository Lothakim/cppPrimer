#include <iostream>
#include "..\Sales_item.h"

int main()
{
    Sales_item total;
    if (std::cin >> total)
    {
        Sales_item trans;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
            {
                total += trans;
            }
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
            
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}

/*
Input: 
0-201-70353-X 3 20.00
0-201-70353-X 2 25.00
0-201-70354-X 3 20.00
0-201-70354-X 2 25.00
0-201-70353-X 5 20.00
0-201-70354-X 4 24.00
*/