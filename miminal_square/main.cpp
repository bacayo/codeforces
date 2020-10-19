#include <iostream>
#include <math.h>

int main()
{
    int testCases;
    std::cin >> testCases;
    int count = 0;
    while (testCases--)
    {
        int a, b;
        std::cin >> a >> b;

        count = std::pow(std::min(std::max(2 * a, b), std::max(a, 2 * b)), 2);
        std::cout << count << std::endl;
    }

    return 0;
}