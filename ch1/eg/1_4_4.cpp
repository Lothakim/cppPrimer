#include<iostream>

int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal)
    {
        int count = 1;
        val = currVal;
        while (std::cin >> currVal)
        {
            if (currVal  == val)
            {
                count++;
            }
            else
            {
                std::cout << val << " appears " << count << " times." << std::endl;
                val = currVal;
                count = 1;
            }
        }
        std::cout << val << " appears " << count << " times." << std::endl;
    }
    
    return 0;
}