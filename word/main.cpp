#include <iostream>
#include <string>

int main()
{
    int countForUpper = 0;
    int countForLower = 0;
    std::string s;
    std::cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 91)
            countForUpper++;
        if(s[i]>96)
            countForLower++;
    }
    
    if(countForLower>countForUpper || countForLower == countForUpper)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=std::tolower(s[i]);
            
        }
    }
    else
    {
        for(int j=0;j<s.length();j++)
        {
            s[j]=std::toupper(s[j]);
        }
    }
    

    std::cout << s << std::endl;

    return 0;
}