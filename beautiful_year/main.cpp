#include <iostream>

int main()
{
    int year;
    std::cin >> year;
    while (true)
    {
        year++;
        int a = year % 10;         // units digit
        int b = (year / 10) % 10;  // tens digit
        int c = (year / 100) % 10; // hundreds digit
        int d = year / 1000;       // thousands digit

        if (d != c && d != b && d != a && c != b && c != a && b != a)
        {
            break;
        }
    }
    std::cout << year << std::endl;
    return 0;
}