#include <iostream>

int main()
{
    int x = 5;
    int w = 3;

    x = ++x + -w;
    std::cout << w << std::endl;

    w *= x % 2;
    std::cout << w << std::endl;
    return 0;
}