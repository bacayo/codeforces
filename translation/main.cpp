#include <iostream>
#include <string>
#include<algorithm>
int main()
{
    std::string mainString;
    std::string reversedString;
    std::cin >> mainString >> reversedString;

    std::reverse(mainString.begin(),mainString.end());

    if(mainString == reversedString)
    {
        std::cout<<"YES"<<std::endl;
    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
    

    return 0;
}

