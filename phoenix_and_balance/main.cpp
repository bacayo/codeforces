#include <iostream>
#include <math.h>

void solve()
{
    long long number;
    std::cin >> number;

    long long x = pow(2.0, number), y = 0;

    long long div = number / 2;
    for (int i{1}; i < number; i++)
    {
        if (i < div)
            x += pow(2.0, i);
        else
            y += pow(2.0, i);
    }
    std::cout << x - y << std::endl;
}

int main()
{
    int testCase;
    std::cin >> testCase;

    for (int i{0}; i < testCase; i++)
    {
        solve();
    }
    return 0;
}