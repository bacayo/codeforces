#include <iostream>

int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        int row, col;
        int ligths = 0;
        std::cin >> row >> col;

        ligths = (row * col + 1) / 2;

        std::cout << ligths << std::endl;
    }

    return 0;
}