#include <iostream>
#include <string>

int main()
{
    int x = 0;
    int n;
    std::string s;
    std::cin >> n;

    while (n--)
    {
        std::cin >> s;
        if (s[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    std::cout << x << std::endl;
    return 0;
}