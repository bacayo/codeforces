#include <iostream>

int main()
{
    long cases;
    long a, b;
    long count = 0;
    std::cin >> cases;

    while (cases--)
    {
        std::cin >> a >> b;
        if (a % b != 0)
        {
            count = b - a % b;
            std::cout << count << std::endl;
        }
        else
        {
            std::cout << 0 << std::endl;
        }
    }

    return 0;
}