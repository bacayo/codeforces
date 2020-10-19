#include <iostream>

int main()
{
    int numberOfFriends, heightOfFence;
    int heightOfPerson;
    int width = 0;
    std::cin >> numberOfFriends >> heightOfFence;

    while (numberOfFriends--)
    {
        std::cin >> heightOfPerson;
        if (heightOfPerson > heightOfFence)
        {
            width += 2;
        }
        else
        {
            width++;
        }
    }
    std::cout << width << std::endl;

    return 0;
}