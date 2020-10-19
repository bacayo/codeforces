#include <iostream>

int main()
{

    int row, col;
    std::cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        if (i % 4 == 2)
        {
            for (int j = 1; j < col; j++)
            {
                std::cout << '.';
            }
            std::cout << '#';
            std::cout << std::endl;
        }
        else if (i % 4 == 0)
        {
            std::cout << '#';
            for (int j = 1; j < col; j++)
            {
                std::cout << '.';
            }
            std::cout << std::endl;
        }
        else
        {
            for (int i = 1; i <= col; i++)
            {
                std::cout << '#';
            }
            std::cout << std::endl;
        }
    }

    return 0;
}