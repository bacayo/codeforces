#include <iostream>
#include <vector>
#include <math.h>

int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        int length;
        std::cin >> length;

        std::vector<int> candy(length);
        std::vector<int> orange(length);

        for (int i{0}; i < length; i++)
        {
            std::cin >> candy[i];
        }
        for (int j{0}; j < length; j++)
        {
            std::cin >> orange[j];
        }
        int smallestCandy = candy[0];
        int smallestOrange = orange[0];

        for (int i = 1; i < length; i++)
        {
            if (candy[i] < smallestCandy)
                smallestCandy = candy[i];
            if (orange[i] < smallestOrange)
                smallestOrange = orange[i];
        }
        long long count = 0;
        for (int i{0}; i < length; i++)
        {
            count += std::max(candy[i] - smallestCandy, orange[i] - smallestOrange);
        }

        std::cout << count << std::endl;
    }

    return 0;
}