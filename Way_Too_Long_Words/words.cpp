#include <iostream>
using namespace std;

int main()
{
    std::string myWord;
    int numberOfStrings;
    cin >> numberOfStrings;

    while (numberOfStrings--)
    {
        cin >> myWord;
        if (myWord.length() > 10)
        {
            cout << myWord[0] << myWord.length() - 2 << myWord[myWord.length() - 1] << endl;
        }
        else
        {
            cout << myWord << endl;
        }
    }

    return 0;
}
