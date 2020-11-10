#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    int myArr[10][10];

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0)
                myArr[i][j] = 1;
            else if (j == 0)
                myArr[i][j] = 1;
            else
            {
                myArr[i][j] = myArr[i][j - 1] + myArr[i - 1][j];
            }
        }
    }

    std::cout << myArr[num - 1][num - 1];

    return 0;
}