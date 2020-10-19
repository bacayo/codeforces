#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int citizens;
    std::cin >> citizens;
    std::vector<int> money(citizens);
    int count = 0;

    for (int i{0}; i < citizens; i++)
    {
        std::cin >> money[i];
    }
    std::sort(money.begin(), money.end());

    int biggestMoney = money[money.size() - 1];

    for (int i{0}; i < citizens - 1; i++)
    {
        if (money[i] < biggestMoney)
        {
            count += biggestMoney - money[i];
        }
    }
    std::cout << count << std::endl;
    return 0;
}