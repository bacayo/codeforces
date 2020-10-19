#include <iostream>

int main()
{
    long money;
    long count = 0;
    std::cin >> money;

    if (money >= 100)
    {
        count += money / 100;
        money %= 100;
    }

    if (money >= 20)
    {
        count += money / 20;
        money %= 20;
    }
    if (money >= 10)
    {
        count += money / 10;
        money %= 10;
    }
    if (money >= 5)
    {
        count += money / 5;
        money %= 5;
    }
    count += money;

    std::cout << count << std::endl;

    return 0;
}