#include <iostream>

int main()
{
    int numberOfPeople, numberOfPar;
    std::cin >> numberOfPeople >> numberOfPar;
    int count = 0;
    int teams = 0;
    while (numberOfPeople--)
    {
        int numberOfTimes;
        std::cin >> numberOfTimes;

        if (numberOfTimes + numberOfPar <= 5)
        {
            count++;
        }
    }
    if ( count >= 3)
    {
        teams = count / 3;
    }

    std::cout << teams << std::endl;

    return 0;
}