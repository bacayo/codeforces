#include <iostream>
#include <vector>
int main()
{
    int testCase;
    std::cin >> testCase;

    while (testCase--)
    {
        std::vector<int> sum;
        int number;
        int power = 1;
        std::cin >> number;
        while (number > 0)
        {
            if (number % 10 > 0)
            {
                sum.push_back((number % 10) * power);
            }
            number /= 10;
            power *= 10;
        }
        std::cout << sum.size() << "\n";

        for (int i = 0; i < sum.size(); i++)
        {
            std::cout << sum[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}