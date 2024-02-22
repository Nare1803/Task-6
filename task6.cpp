#include<iostream>

int main()
{
    int x = 10;
    int& r = x;
    r = 20;
    std::cout << "x = " << x << std::endl;
    x = 30;
    std::cout << "r = " << r << std::endl;

    int *p = &r;
    *p = 40;
    std::cout << "p = " << *p << std::endl;
    std::cout<< "r = " << r << std::endl;
    x *= 10;
    std::cout << "p = " << *p << std::endl;
    return 0;
}
