#include <iostream>
int main()
{

    int number;
    std::cin >> number;
    if (number % 2 == 0)
    {
        std::cout << number - 4 << " 4" << std::endl;
    }
    else
    {
        std::cout << number - 9 << " 9" << std::endl;
    }

    return 0;
}