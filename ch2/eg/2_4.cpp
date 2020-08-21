#include <iostream>

int main()
{
    const int i = 1024;
    const int &r = i;
    r = 42; // 错误，r是对常量的引用
    int &rt = i; // 错误，试图让非常量引用指向常量对象

    int i1 = 1;
    const int &r1 = i1; // 初始化时允许将非常量绑定到对常量的引用上

    double d = 3.14;
    const int &ri = d; // 相当于 const int temp = d, const int &ri = temp，即ri绑定了一个临时量

    int i2 = 42;
    int &r2 = i2;
    const int &r3 = i2; // 正确，但无法通过r3来修改i2的值
    r2 = 0;
    r3 = 1; // 错误

    const double pi = 3.14;
    double *ptr = &pi; //错误，ptr为普通指针
    const double *cptr = &pi;
    *cptr = 42; // 错误，不能给*cptr赋值
    int i3 = 2333;
    const int *pi3 = &i3; // 正确，但无法通过*pi3改变i3的值
    *pi3 = 666;

    double dval = 3.14;
    cptr = &dval; // 正确，但不能通过cptr改变dval的值
    /* 
    注意：
    对于绑定了常量的引用，不能改变其值
    但对于指向常量的指针，其值（即所指向的对象）可改变，但不可通过解引用符*来改变其所指向的对象的值
     */

    int errNumb = 0;
    int *const curErr = &errNumb;  // 常量指针，其指向不可变
    *curErr = 42;                  // 但其指向一个非常量时，可通过*改变其指向对象的值
    const double pi = 3.14159;
    const double *const pip = &pi; // 指向常量对象的常量指针
    *pip = 2.72;                   // 错误，指向常量对象的常量指针，其指向不可变，其指向对象的值同样不可变
    double *const p1 = &pi;        // 错误，普通的常量指针不能指向常量对象
}