#include <iostream>
#include <vector>

int main()
{
    int numOfEvents;
    std::cin >> numOfEvents;
    int numOfFreepol = 0;
    int count = 0;
    while (numOfEvents--)
    {
        int crime;
        std::cin >> crime;
        if (numOfFreepol == 0 && crime < 0)
        {
            count++;
        }
        if (crime > 0)
        {
            numOfFreepol += crime;
        }
        if (numOfFreepol > 0 && crime < 0)
        {
            numOfFreepol--;
        }
    }
    std::cout << count << std::endl;

    return 0;
}