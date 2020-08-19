#include<iostream>

int main(){
    int start = 50, end = 100, sum = 0;
    int n = start;
    while (n <= end)
    {
        sum += n++;
    }
    std::cout << "The sum of " << start << " to " << end << " inclusive is " << sum << std::endl;

    return 0;   
}