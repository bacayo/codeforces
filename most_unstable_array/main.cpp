#include <iostream>

int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        long length, sum;
        std::cin >> length >> sum;

        if (length == 1)
            std::cout << 0 << std::endl;
        else if (length == 2)
        {
            std::cout << sum << std::endl;
        }
        else
        {
            sum = sum * 2;
            std::cout << sum << std::endl;
        }
    }

    return 0;
}