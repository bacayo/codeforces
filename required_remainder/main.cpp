#include <iostream>

int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        long long mod, rem;
        long long number;
        std::cin >> mod >> rem >> number;

        if (number - number % mod + rem <= number)
        {
            std::cout << number - number % mod + rem << std::endl;
        }
        else
        {
            std::cout << number - number % mod - (mod - rem) << std::endl;
        }
    }
    return 0;
}