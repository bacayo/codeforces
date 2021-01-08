#include <iostream>
#include <string.h>
int main()
{
    std::string myString;
    std::cin >> myString;
    bool check = false;

    for (int i = 0; i < myString.length(); i++)
    {
        if (myString[i] == 'H')
        {
            //std::cout << "YES" << std::endl;
            check = true;
            break;
        }
        else if (myString[i] == 'Q')
        {
            //std::cout << "YES" << std::endl;
            check = true;
            break;
        }
        else if (myString[i] == '9')
        {
            check = true;
            //std::cout << "YES" << std::endl;
            break;
        }
    }
    if (!check)
    {
        std::cout << "NO" << std::endl;
    }
    else
    {
        std::cout << "YES" << std::endl;
    }

    return 0;
}