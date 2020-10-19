#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        int numberOfAth;
        std::cin >> numberOfAth;

        std::vector<int> ath(numberOfAth);

        for (int i{0}; i < numberOfAth; i++)
        {
            std::cin >> ath[i];
        }

        std::sort(ath.begin(), ath.end());

        int temp = ath[1] - ath[0];
        for (int i{1}; i < numberOfAth - 1; i++)
        {
            if (ath[i + 1] - ath[i] <= temp)
            {
                temp = ath[i + 1] - ath[i];
            }
        }

        std::cout << temp << std::endl;
    }

    return 0;
}