#include <iostream>

int main()
{
    int numOfPeople;
    int choice;
    std::cin >> numOfPeople;

    while (numOfPeople--)
    {
        std::cin >> choice;
        if (choice == 1)
        {
            std::cout << "Hard" << std::endl;
            break;
        }
    }

    if (choice == 0)
    {
        std::cout << "Easy" << std::endl;
    }

    return 0;
}