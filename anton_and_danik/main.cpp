#include <iostream>
#include <string>

int main()
{

    int countForAnton = 0, countForDanik = 0;
    int numberOfGames;
    std::cin>>numberOfGames;
    std::string s;
    std::cin >> s;

    for(int i=0;i<numberOfGames; i++)
    {
        if(s[i] == 'A')
        {
            countForAnton++;
        }
        else
        {
            countForDanik++;
        }
    }
    if(countForAnton>countForDanik)
    {
        std::cout<<"Anton"<<std::endl;
    }
    else if(countForDanik>countForAnton)
    {
        std::cout<<"Danik"<<std::endl;
    }
    else
    {
        std::cout<<"Friendship"<<std::endl;
    }
    

    return 0;
}