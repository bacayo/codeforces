#include <iostream>
#include <algorithm>
int main()
{
    int myArr[250];
    int level, littleX, littleY;
    int count = 0;

    std::cin >> level >> littleX;
    for (int i = 0; i < littleX; i++)
    {
        std::cin >> myArr[i];
    }
    std::cin >> littleY;
    for (int i = littleX; i < littleX + littleY; i++)
    {
        std::cin >> myArr[i];
    }

    std::sort(myArr, myArr + (littleX + littleY));

    for (int i = 0; i < littleX + littleY; i++)
    {
        if (myArr[i] != myArr[i + 1])
        {
            count++;
        }
    }
    if (count == level)
    {
        std::cout << "I become the guy." << std::endl;
    }
    else
    {
        std::cout << "Oh, my keyboard!" << std::endl;
    }

    return 0;
}