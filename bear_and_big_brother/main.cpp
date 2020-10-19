#include <iostream>

int main()
{
    int years = 0;
    int limakWeight, bobWeight;
    std::cin >> limakWeight >> bobWeight;

    while (limakWeight <= bobWeight)
    {
        limakWeight *= 3;
        bobWeight *= 2;
        years++;
    }

    std::cout << years;

    return 0;
}