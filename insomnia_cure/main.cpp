#include <iostream>

int main()
{
    int k, l, m, n, numberOfDragons;
    int count = 0;
    std::cin >> k >> l >> m >> n >> numberOfDragons;

    for (int i= 1; i <= numberOfDragons; i++)
    {
        if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
        {
            count++;
        }
    }
    int output = numberOfDragons - count;
    std::cout << output << std::endl;
    return 0;
}