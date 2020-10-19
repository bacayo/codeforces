#include <iostream>
#include <string>

int main()
{
    int numOfMagnets;
    int count = 0;
    std::string magnet;
    char m ;

    std::cin >> numOfMagnets;
    while (numOfMagnets--)
    {
        std::cin >> magnet;
        if (magnet[0] != m)
        {
            count++;
        }
        m = magnet[0];
    }
    std::cout << count << std::endl;

    return 0;
}