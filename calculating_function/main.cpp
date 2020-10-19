#include <iostream>

int main()
{
    long  n;
    long  output = 0;
    std::cin >> n;

    if (n % 2 == 0)
    {
        output = n / 2;
    }
    else
    {
        output = -(n / 2 + 1);
    }
    std::cout << output << std::endl;

    return 0;
}