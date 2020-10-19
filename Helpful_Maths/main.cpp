#include <iostream>
#include <string>

int main()
{
    int c1 = 0, c2 = 0, c3 = 0;
    std::string s;
    std::cin >> s;

    for (int i = 0; i < s.length(); i += 2)
    {
        if (s[i] == '1')
        {
            c1++;
        }
        else if (s[i] == '2')
        {
            c2++;
        }
        else if (s[i] == '3')
        {
            c3++;
        }
    }
    for (int i = 0; i < c1; i++)
    {
        std::cout << '1';
        if ((c2 == 0 && c3 == 0) && i == c1 - 1)
        {
            std::cout << std::endl;
        }
        else
        {
            std::cout << '+';
        }
    }
    for (int i = 0; i < c2; i++)
    {
        std::cout << '2';
        if (c3 == 0 && i == c2 - 1)
        {
            std::cout << std::endl;
        }
        else
        {
            std::cout << '+';
        }
    }
    for (int i = 0; i < c3; i++)
    {
        std::cout << '3';
        if (i == c3 - 1)
        {
            std::cout << std::endl;
        }
        else
        {
            std::cout << '+';
        }
    }

    return 0;
}