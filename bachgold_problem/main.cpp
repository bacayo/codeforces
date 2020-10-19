#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    if (number % 2 == 0)
    {
        std::cout << number / 2 << std::endl;

        for (int i = 0; i < number / 2; i++)
        {
            std::cout << 2 << " ";
        }
    }
    else
    {
        std::cout << number / 2 << std::endl;

        for (int i = 0; i < number / 2; i++)
        {

            if (i == static_cast<int>(number / 2 - 1))
                std::cout << 3;
            else
                std::cout << 2 << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}