#include <iostream>
#include <algorithm>
#include <string>
int main()
{
    int length;
    int count = 0;

    std::string myString;
    std::cin >> length >> myString;

    std::transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    std::sort(myString.begin(), myString.end());

    for (int i = 0; i < length - 1; i++)
    {
        if (myString[i] != myString[i + 1])
            count++;
    }

    if (count == 25)
        std::cout << "YES"
                  << "\n";
    else

        std::cout << "NO"
                  << "\n";

        return 0;
}