#include <iostream>

int main()
{
    int numberOfSoldiers, height;
    std::cin >> numberOfSoldiers;
    std::cin >> height;
    int minHeight, maxHeight, minI, maxI;
    minHeight = height;
    maxHeight = height;
    minI = 0, maxI = 0;

    for (int i = 1; i < numberOfSoldiers; i++)
    {
        std::cin >> height;
        if (height > maxHeight)
        {
            maxI = i;
            maxHeight = height;
        }
        if (height <= minHeight)
        {
            minI = i;
            minHeight = height;
        }
    }
    int need = maxI + (numberOfSoldiers - 1 - minI) - (maxI > minI ? 1 : 0);
    std::cout << need << std::endl;

    return 0;
}