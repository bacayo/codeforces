#include <iostream>
#include <vector>

int main()
{
    int teams;
    int home, away;
    std::cin >> teams;
    std::vector<int> h(teams);
    std::vector<int> a(teams);

    int count = 0;

    for (int i = 0; i < teams; i++)
    {
        std::cin >> h[i] >> a[i];
    }

    for (int i = 0; i < teams; i++)
    {
        for (int j = teams - 1; j >= 0; j--)
        {
            if (h[i] == a[j])
            {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}