#include <iostream>
#include <string>
int main()
{
    int numberOfStones;
    int count = 0;
    std::string s;
    std::cin >> numberOfStones;
    std::cin >> s;

    for (int i = 0; i < numberOfStones; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }  
    }

    std::cout<<count;
    return 0;
}