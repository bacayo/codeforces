#include <iostream>

int main()
{

    int number;
    int howManyTimes;

    std::cin >> number >> howManyTimes;
    while (howManyTimes--)
    {
        if (number % 10 != 0)
        {
            number--;
        }
        else
        {
            number /= 10;
        }
        
    }
    std::cout << number<<std::endl;
    
    return 0;
}