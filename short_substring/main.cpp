#include <iostream>
#include <string>
int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        std::string myString;
        std::cin >> myString;
        std::string newString;

        for (int i{0}; i < myString.length(); i++)
        {

            if (i % 2 == 0 || i==myString.length()-1)
                newString.push_back(myString[i]);
            // if (i == myString.length() - 1)
            // {
            //     newString.push_back(myString[i]);
            // }
        }
        std::cout << newString << std::endl;
    }

    return 0;
}