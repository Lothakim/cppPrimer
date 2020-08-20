# include <iostream>

int reused = 42; // Gloabal Scope

int main()
{
    int unique = 0;
    std::cout << reused << " " << unique << std::endl;
    int reused = 0;
    std::cout << reused << " " << unique << std::endl;
    std::cout << ::reused << " " << unique << std::endl;

    return 0;
}