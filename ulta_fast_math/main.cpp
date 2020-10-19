#include <iostream>

int main()
{
    std::string a, b, c;
    std::cin >> a >> b;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            c.append("0");
        }
        else
        {
            c.append("1");
        }
    }
    std::cout << c << std::endl;
    return 0;
}