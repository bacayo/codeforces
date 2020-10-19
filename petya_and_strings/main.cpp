#include <iostream>

int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] < 91)
        {
            s1[i] += 32;
        }
        if (s2[i] < 91)
        {
            s2[i] += 32;
        }
    }
    if (s1 < s2)
    {
        std::cout << -1 << std::endl;
    }
    else if (s1 == s2)
    {
        std::cout << 0 << std::endl;
    }
    else if (s1 > s2)
    {
        std::cout << 1 << std::endl;
    }

    return 0;
}