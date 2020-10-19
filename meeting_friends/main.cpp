#include <iostream>
#include <vector>
int main()
{
    std::vector<int> coor(3);

    for (int i{0}; i < 3; i++)
    {
        std::cin >> coor[i];
    }
    int smallest = coor[0], biggest = coor[0];

    for (int i{1}; i < 3; i++)
    {
        if (coor[i] < smallest)
            smallest = coor[i];
        if (coor[i] > biggest)
            biggest = coor[i];
    }
    std::cout << biggest - smallest << "\n";
    return 0;
}