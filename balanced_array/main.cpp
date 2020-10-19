#include <iostream>

int main()
{
    int testCases;

    std::cin >> testCases;
    while (testCases--)
    {
        int length;
        std::cin >> length;

        if ((length / 2) % 2 == 1)
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            int sum1 = 0, sum2 = 0;
            std::cout << "YES" << std::endl;

            for (int i = 2; i <= length; i += 2)
            {
                std::cout << i << " ";
                sum1 += i;
            }
            for (int i = 1; i < length - 2; i += 2)
            {
                std::cout << i << " ";
                sum2 += i;
            }

            std::cout << sum1 - sum2 << std::endl;
        }
        
    }

    return 0;
}