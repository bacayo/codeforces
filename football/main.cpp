#include <iostream>
#include <string>

int main()
{
    std::string pos;
    std::cin >> pos;

    char team1 = '0';
    char team2 = '1';

    int count = 0;

    for (int i = 0; i < pos.length() - 1; i++)
    {
        if (pos[i] == pos[i + 1])
        {
            count++;
        }
        else if(count+1 > 6)
        {
            break;
        }
        else
        {
            count = 0;
        }
    }

    if (count + 1 > 6)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}