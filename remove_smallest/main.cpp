#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int testCases;
    std::cin >> testCases;

    

    while (testCases--)
    {
        int length;
        std::cin >> length;
        std::vector<int> myArr(length);

        bool flag = true;

        for (int i{0}; i < length; i++)
        {
            std::cin >> myArr[i];
        }
        std::sort(myArr.begin(), myArr.end());

        for (int i = 1; i < length; i++)
        {
            flag &= (myArr[i] - myArr[i-1] <= 1);
        }

        // std::cout << flag << std::endl;
        if (!flag)
            std::cout << "NO" << std::endl;
        else
            std::cout << "YES" << std::endl;
    }

    return 0;
}