#include<iostream>

int main(){
    int n1, n2;
    std::cout << "Please input two integers (the smaller one first):" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "The numbers between " << n1 << " and " << n2 << " is: " <<std::endl;
    for (int i = n1; i <= n2; i++)
    {
        std::cout << i << std::endl;
    }
    
    return 0;
}