#include<iostream>

int main(){
    int start = 50, end = 100, sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += i;
    }
    std::cout << "The sum of " << start << " to " << end << " inclusive is " << sum << std::endl;
}