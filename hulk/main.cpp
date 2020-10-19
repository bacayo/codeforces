#include <iostream>

int main()
{
    int layer;
    std::cin >> layer;

    for (int i = 1; i < layer; i++)
    {
        if (i % 2 == 1)
        {
            std::cout << "I hate that ";
        }
        else
        {
            std::cout << "I love that ";
        }
    }
    if(layer%2==0)
    {
        std::cout<<"I love it"<<std::endl;
    }
    else
    {
        std::cout<<"I hate it"<<std::endl;
    }
    
    return 0;
}