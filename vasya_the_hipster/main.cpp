#include <iostream>

int main()
{
    int redSocks, blueSocks;
    int daysWear, daysPair;

    std::cin >> redSocks >> blueSocks;

    if (redSocks > blueSocks)
    {
        daysWear = blueSocks;
        if (redSocks - blueSocks > 1)
        {
            daysPair = (redSocks - blueSocks) / 2;
        }
        else
        {
            daysPair = 0;
        }
    }
    else if (redSocks == blueSocks)
    {
        daysPair = 0;
        daysWear = redSocks;
    }
    else
    {
        daysWear = redSocks;
        if (blueSocks - redSocks > 1)
        {
            daysPair = (blueSocks - redSocks) / 2;
        }
        else
        {
            daysPair = 0;
        }
    }

    std::cout << daysWear << " " << daysPair << "\n";

    return 0;
}