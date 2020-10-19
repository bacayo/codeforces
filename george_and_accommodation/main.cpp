#include <iostream>

int main()
{
    int peopleLiving;
    int peopleAcc;
    int count = 0;

    int numberOfRooms;
    std::cin >> numberOfRooms;

    while (numberOfRooms--)
    {
        std::cin >> peopleLiving >> peopleAcc;
        if (peopleAcc - peopleLiving >= 2)
        {
            count += 1;
        }
    }

    std::cout << count << std::endl;

    return 0;
}