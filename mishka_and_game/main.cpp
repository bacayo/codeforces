#include <iostream>

int main()
{
    int testCase;
    std::cin >> testCase;
    int mScore = 0, cScore = 0;
    while (testCase--)
    {
        int miskha, chris;
        std::cin >> miskha >> chris;
        if (miskha > chris)
            mScore++;
        else if (chris > miskha)
            cScore++;
        else
            mScore++, cScore++;
    }

    if (mScore > cScore)
        std::cout << "Mishka" << std::endl;

    else if (mScore < cScore)
        std::cout << "Chris" << std::endl;
    else
        std::cout << "Friendship is magic!^^" << std::endl;

    return 0;
}