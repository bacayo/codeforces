#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int testCases;
    std::cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        for (auto &it : a)
        {
            cin >> it;
        }
        vector<int> used(n);
        vector<int> p;
        for (int i = 0; i < 2 * n; ++i)
        {
            if (!used[a[i] - 1])
            {
                used[a[i] - 1] = true;
                p.push_back(a[i]);
            }
        }
        for (auto it : p)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}