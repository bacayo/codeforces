#include <iostream>

int main()
{
    int testCases;
    int count = 0;

    std::cin >> testCases;
    while (testCases--)
    {
        int number1, number2;
        std::cin >> number1 >> number2;

        if (number1 > number2 && (number1 - number2) % 10 != 0)
        {
            count = (number1 - number2) / 10 + 1;
        }
        else if (number2 > number1 && (number1 - number2) % 10 != 0)
        {
            count = (number2 - number1) / 10 + 1;
        }
        else if (number1 > number2 && (number1 - number2) % 10 == 0)
        {
            count = (number1 - number2) / 10;
        }
        else if (number2 > number1 && (number2 - number1) % 10 == 0)
        {
            count = (number2 - number1) / 10;
        }
        else
        {
            count = 0;
        }
        std::cout << count << std::endl;
    }

    return 0;
}