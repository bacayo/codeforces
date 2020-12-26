#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int numOfCoins;
    std::cin >> numOfCoins;
    std::vector<int> myArr(numOfCoins);
    int sum = 0;
    int count = 0;

    for (int i = 0; i < numOfCoins; i++)
    {
        std::cin >> myArr[i];
        sum += myArr[i];
    }
    sum = sum / 2;
    std::sort(std::begin(myArr), std::end(myArr));

    int sum2 = 0;

    for (int i = numOfCoins - 1; i >= 0; i--)
    {
        sum2 += myArr[i];
        count++;
        if (sum2 > sum)
            break;
    }
    std::cout << count;
    return 0;
}