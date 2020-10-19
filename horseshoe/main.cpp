#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
int main()
{
    std::vector<int> color(4);
    std::cin >> color[0] >> color[1] >> color[2] >> color[3];
    std::sort(color.begin(), color.end());
    color.erase(std::unique(color.begin(), color.end()), color.end());
    std::cout << 4 - color.size() << std::endl;
    return 0;
}