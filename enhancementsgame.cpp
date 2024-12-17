// Play a guessing game with the user where the computer chooses a random number and the user then tries to guess it
// Phillip Frota
// 10/16/2024

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int guessed;
    int guess;
    int range, random, record;
    char answer = 'y';

    srand((unsigned) time(NULL));


    cout << "Welcome to the guessing game! I'll choose a random number between 1 and a limit of your choice , and you guess what it is.\n";
    cout << "How high would you like the guessing limit to be? ";
    cin >> range;


    while(answer == 'y' || answer == 'Y')
    {
        random = 1 +(rand() % range);
        guessed = 0;
        guess = -1;

        cout << "I'm thinking of a number! What is it?:";
        while (guess != random)
        {
            guessed++;
            cin >> guess;

            if (guess < random)
            {
                cout << "Too low. Try again: ";
            }
            else if (guess > random)
            {
                cout << "Too high. Try again: ";
            }
        }
        
        cout << "You guessed it! It took you " << guessed << " tries. Thanks for playing!\n";
        if(record > guessed)
        {
            record = guessed;
            cout << "*** You've set a new record for the lowest number of guesses! ***\n ";
        }

        cout << "Would you like to play again? Y/N: ";
        cin >> answer;
    }

    return 0;
}