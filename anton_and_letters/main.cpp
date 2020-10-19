#include <iostream>
#include <algorithm>
#include <string.h>
int main()
{
    int count = 0;
    std::string s;

    getline(std::cin, s); // using get line because white spaces

    std::sort(s.begin(), s.end());                            // string sorted
    s.erase(std::unique(s.begin(), s.end()), s.end());        // removing unique elements
    s.erase(remove_if(s.begin(), s.end(), isspace), s.end()); // removing white spaces

    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i])) // checking if char is alphabet
            count++;
    }
    std::cout << count << std::endl;

    return 0;
}