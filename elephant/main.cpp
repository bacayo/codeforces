#include <iostream>

int main()
{

    int x;
    int count = 0;
    std::cin >> x;

    x % 5 == 0 ? count = x / 5 : count = x / 5 + 1;
    std::cout << count << std::endl;

    return 0;
}