#include <iostream>

int main()
{
    int numberOfParticipant;
    int nthParticipant;
    int participantArray[50];
    int count = 0;

    std::cin >> numberOfParticipant >> nthParticipant;
    
    for (int i = 0; i < numberOfParticipant; i++)
    {
        std::cin >> participantArray[i];
    }
    for (int i = 0; i < numberOfParticipant; i++)
    {
        if (participantArray[i] >= participantArray[nthParticipant - 1] && participantArray[i] > 0)
        {
            count++;
        }
    }

    std::cout << count << std::endl;
    return 0;
}