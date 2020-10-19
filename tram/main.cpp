#include <iostream>

int main()
{
    int numberOfStops;
    int passengerEnter, passengerExit;
    int maxPassenger = 0;
    int count = 0;
    std::cin >> numberOfStops;
    while ((numberOfStops--))
    {
        std::cin >> passengerExit >> passengerEnter;
        count += passengerEnter - passengerExit;
        if(count > maxPassenger)
        {
            maxPassenger = count;
        }
    }

    std::cout << maxPassenger << std::endl;

    return 0;
}