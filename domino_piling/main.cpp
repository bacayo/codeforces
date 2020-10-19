#include <iostream>

int main()
{
    int domino1 = 1;
    int domino2 = 2;
    int short_side, long_side;
    int sum = 0;

    std::cin >> short_side >> long_side;

    /*if (short_side == 1)
    {
        sum = long_side / domino2;
        std::cout << sum;
    }
    else if (domino2 == short_side)
    {
        sum = long_side / domino1;
        std::cout << sum;
    }
    else
    {

        sum = (short_side / domino1) + (long_side / domino2);
        std::cout << sum;
    }
    */
    sum = (short_side * long_side) / (domino1 * domino2);
    std::cout << sum << std::endl;

    return 0;
}