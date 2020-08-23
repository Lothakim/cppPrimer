# include <iostream>

int reused = 42; // 全局变量

int main()
{
    int unique = 0;
    std::cout << reused << " " << unique << std::endl;
    int reused = 0;
    std::cout << reused << " " << unique << std::endl;      // 局部变量覆盖全局变量
    std::cout << ::reused << " " << unique << std::endl;    // 指定访问全局变量

    return 0;
}