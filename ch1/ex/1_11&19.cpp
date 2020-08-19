#include<iostream>

int main(){
    int n1, n2, tmp, max, min;
    std::cout << "Please input two integers: " << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "The numbers between " << n1 << " and " << n2 << " is: " <<std::endl;

    if (n1 > n2)
    {
        max = n1;
        min = n2;
    }
    else
    {
        max = n2;
        min = n1;
    }
    tmp = min;
    
    while (tmp <= max)
    {
        std::cout << tmp << std::endl;
        ++tmp;
    }
    
    return 0;
}