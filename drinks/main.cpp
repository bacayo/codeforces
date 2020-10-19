#include <iostream>

int main()
{
    int orange, propotion, total(0);
    std::cin >> orange;
    for (int i = 0; i < orange; i++)
    {
        std::cin >> propotion;
        total += propotion;
    }
    std::cout << static_cast<double>(total) / static_cast<double>(orange) << std::endl;
    return 0;
}