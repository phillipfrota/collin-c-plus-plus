#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int guess = -1;

    srand((unsigned) time(NULL));
    int random = 1 +(rand() % 100);


    cout << "Welcome to the guessing game! I'll choose a random number between 1 and 100, and you guess what it is.\n";
    cout << "I'm thinking of a number! What is it? ";

    while (guess != random)
    {
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
    cout << "You guessed it! Thanks for playing!";

    return 0;
}