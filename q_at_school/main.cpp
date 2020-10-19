#include <iostream>

int main()
{
    int turn;
    int qLong;
    std::string q;
    int temp;

    std::cin >> qLong >> turn;
    std::cin >> q;

    while (turn--) 
    {
        for(int j=0;j<q.length(); j++)
        {
            if(q[j]<q[j+1])
            {
                temp = q[j];
                q[j] = q[j+1];
                q[j+1] =temp;
                j++;
                
            }
        }
    }
    std::cout << q<<std::endl;

    return 0;
}