#include <iostream>

int main()
{
    int shovelPrice, denomination;
    std::cin >> shovelPrice >> denomination;
    int count = 0;
    int i = 2;

    if (shovelPrice % 10 == 0)
    {
        count = 1;
    }
    else if ((shovelPrice - denomination) % 10 == 0)
    {
        count = 1;
    }
    else
    {
        while (i < 10)
        {
            int newPrice = 1;
            newPrice = shovelPrice * i;

            if (newPrice % 10 == 0 || (newPrice - denomination) % 10 == 0)
            {
                count = i;
                break;
            }

            i++;
        }
    }

    std::cout << count << "\n";
    
    return 0;
}