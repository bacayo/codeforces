#include <iostream>

void solve();

int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int length;
    std::cin >> length;
    int even = 0, odd = 0;

    for (int i{0}; i < length; i++)
    {
        int number;
        std::cin >> number;

        if (number % 2 != i % 2)
        {
            if (i % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    if (even != odd)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        std::cout << even << std::endl;
    }
}