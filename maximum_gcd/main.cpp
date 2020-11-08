#include <iostream>

int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        int number;
        int gcd = 0;
        std::cin >> number;

        gcd = number / 2;

        std::cout << gcd << std::endl;
    }

    return 0;
}