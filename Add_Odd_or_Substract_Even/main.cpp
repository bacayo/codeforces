#include <iostream>

int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        int a, b;
        int count = 0;
        int temp = 0;
        std::cin >> a >> b;

        if (b - a > 0)
        {
            temp = b - a;
            if (temp % 2 != 0)
            {
                count++;
            }
            else
            {
                count = 2;
            }
        }
        else if (a - b > 0)
        {
            temp = a - b;
            if (temp % 2 == 0)
            {
                count++;
            }
            else
            {
                count = 2;
            }
        }
        else
            count = 0;
        
        std::cout << count << std::endl;
    }

    return 0;
}