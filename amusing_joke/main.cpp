#include <iostream>
#include <algorithm>
int main()
{
    std::string guestName;
    std::string resHost;
    std::string lettersPile;
    std::string temp;

    std::cin >> guestName >> resHost >> lettersPile;

    if (guestName.length() + resHost.length() != lettersPile.length())
    {
        std::cout << "NO" << std::endl;
    }
    else
    {
        temp = resHost + guestName;
        std::sort(temp.begin(), temp.end());
        std::sort(lettersPile.begin(), lettersPile.end());
        if (temp == lettersPile)
            std::cout << "YES"
                      << "\n";
        else
            std::cout << "NO"
                      << "\n";
    }
    
    return 0;
}