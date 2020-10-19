#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<long> num(4);

    for (int i = 0; i < num.size(); i++)
    {
        std::cin >> num[i];
    }

    std::sort(std::begin(num), std::end(num));

    for (int i = 0; i < num.size()-1; i++)
    {
        std::cout << num[num.size()-1]-num[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}