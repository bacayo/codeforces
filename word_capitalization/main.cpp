#include<iostream>
#include<string>

int main()
{
    std::string name;
    std::cin >> name ; 

    for(int i=0;i<name.length();i++)
    {
        if(name[0] >= 97 && name[0] <= 122)
        {
            name[0]= name[0]-32;
        }
    }
    std::cout<<name;
    return 0;
}