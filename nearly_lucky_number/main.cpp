#include<iostream>


int main()
{
    long long nearlyLuckyNumber;
    int count = 0;
    std::cin>>nearlyLuckyNumber;
    std::string s = std::to_string(nearlyLuckyNumber);

    for(int i =0;i<s.length(); i++)
    {
        if(s[i]== '4' || s[i]=='7')
        {
            count++;
        }
    }
    
    if(count ==4 || count == 7)
    {
        std::cout<<"YES"<<std::endl;
    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
    

    return 0;
}