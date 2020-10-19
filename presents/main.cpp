#include <iostream>
#include <vector>

int main()
{
    int numberOfFriends;
    int present;
    std::cin >> numberOfFriends;

    std::vector<int> f(numberOfFriends);

    for (int i = 1; i <= numberOfFriends; i++)
    {
        std::cin>>present;
        f[present] = i;
    }
    
    std::cout<<f[1];

    for(int i=2;i<=numberOfFriends;i++)
    {
        std::cout<<" "<<f[i];
    }
    std::cout<<std::endl;

    return 0;
}