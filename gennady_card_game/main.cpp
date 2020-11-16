#include <iostream>
#include <string>

int main()
{
    std::string cardOnTable;
    std::cin >> cardOnTable;

    int numOfCards = 5;
    int card = 0;

    while (numOfCards--)
    {
        std::string cardOnHand;
        std::cin >> cardOnHand;

        if (cardOnHand[0] == cardOnTable[0] || cardOnHand[0] == cardOnTable[1] ||
            cardOnHand[1] == cardOnTable[0] || cardOnHand[1] == cardOnTable[1])
        {
            card++;
        }
    }
    if (card > 0)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    return 0;
}