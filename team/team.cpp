#include <iostream>

int main()
{
    int petya, vesya, tonya;
    int numberOfProblems;
    int score = 0;

    std::cin >> numberOfProblems;
    while(numberOfProblems--)
    {
        std::cin >> petya >> vesya >> tonya;
        if(petya+vesya+tonya > 1)
        {
            score++;
        }

    }
    std::cout<<score<<std::endl;
    return 0;
}