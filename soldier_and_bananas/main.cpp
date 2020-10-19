#include <iostream>

int main()
{
    int amountOfMoneyToPay = 0;
    int myMoney, howManyBanana, aBananaMoney;
    std::cin >> aBananaMoney >> myMoney >> howManyBanana;

    for (int i = 1; i <= howManyBanana; i++)
    {
        amountOfMoneyToPay += i * aBananaMoney;
    }
    int needToBarrow = amountOfMoneyToPay - myMoney;
    if(needToBarrow<0)
    {
        std::cout<<0<<std::endl;
    }
    else
    {
    std::cout << needToBarrow << std::endl;

    }
    
    return 0;
}