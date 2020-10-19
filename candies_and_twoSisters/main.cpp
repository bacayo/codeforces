#include <iostream>

int main()
{
    long numCases, candles, distCandy;
    std::cin >> numCases;

    while (numCases--)
    {
        std::cin >> candles;
        if (candles == 2 || candles == 1)
        {
            distCandy = 0;
        }
        else if (candles % 2 == 0 && candles > 2)
        {
            distCandy = candles / 2 - 1;
        }
        else
        {
            distCandy = candles / 2;
        }
        std::cout << distCandy << "\n";
    }

    return 0;
}