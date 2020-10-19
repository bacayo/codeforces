#include <iostream>
#include <vector>

int main()
{

    int participant;
    int count = 0;
    std::cin >> participant;
    std::vector<int> list(participant);

    for (int i = 0; i < participant; i++)
    {
        std::cin >> list[i];
    }
    int highest, lowest;

    highest = list[0];
    lowest = list[0];

    for (int i = 1; i < participant; i++)
    {
        if (list[i] < lowest)
        {
            lowest = list[i];
            count++;
        }
        else if (list[i] > highest)
        {
            highest = list[i];
            count++;
        }
        else
        {
            count = count;
        }
    }
    std::cout << count << "\n";

    return 0;
}