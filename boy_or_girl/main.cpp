#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s;
    int count = 0;
    std::cin >> s;

    std::sort(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        std::cout<<"CHAT WITH HER!"<<std::endl;
    }
    else
    {
        std::cout<<"IGNORE HIM!"<<std::endl;
    }
    
    return 0;
}