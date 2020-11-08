#include <iostream>

int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        int count = 0;
        int numOfSticks;
        std::cin >> numOfSticks;

        if (numOfSticks <= 2)
        {
            count = 1;
        }
        else
        {
            if (numOfSticks % 2 )
                count = (numOfSticks / 2) + 1;
            else
                count = numOfSticks / 2;
        }

        std::cout << count << std::endl;
    }

    return 0;
}