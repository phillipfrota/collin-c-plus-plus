// Make a program to determine if Harry will win or lose his battles
// Phillip Frota
// 10/5/24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int health, choice, attack;
    const int pixie = 20,
              gnome = 40,
              basilisk = 80,
              dragon = 100;

    const int pixie_choice = 1,
              gnome_choice = 2,
              basilisk_choice = 3,
              dragon_choice = 4;

    cout << "Harry Potter is being attacked!\n";
    cout << "How much health should he start with?  (1-100) : ";
    cin >> health;


    cout << "Which creature is attacking?\n";
    cout << "1. Cornish Pixie\n";
    cout << "2. Gnome\n";
    cout << "3. Basilisk\n";
    cout << "4. Dragon\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == pixie_choice)
    {
        cout << "Harry is attacked by a Cornish Pixie which deals 20 damage.\n";
        attack = health - pixie;
        cout << "Harry ends with " << attack << " health.\n";
        if (attack <= 0)
        {
            cout << "Oh no... he didn't make it.";
        }
        else{
               cout << "He survives!";
        }
    }
    else if (choice == gnome_choice)
    {
        cout << "Harry is attacked by a Gnome which deals 40 damage.\n";
        attack = health - gnome;
        cout << "Harry ends with " << attack << " health.\n";
        if (attack <= 0)
        {
            cout << "Oh no... he didn't make it.";
        }
        else{
            cout << "He survives!";
        }
    }
    else if (choice == basilisk_choice)
    {
        cout << "Harry is attacked by a Basilisk which deals 80 damage.\n";
        attack = health - basilisk;
        cout << "Harry ends with " << attack << " health.\n";
        if (attack <= 0)
        {
            cout << "Oh no... he didn't make it.";
        }
        else{
            cout << "He survives!";
        }
    }
    else if (choice == dragon_choice)
    {
        cout << "Harry is attacked by a Dragon which deals 100 damage.\n";
        attack = health - dragon;
        cout << "Harry ends with " << attack << " health.\n";
        if (attack <= 0)
        {
            cout << "Oh no... he didn't make it.";
        }
        else{
            cout << "He survives!";
        }
    }
    else
    {
        cout << "Sorry. " << choice << " isn't a valid creature. I guess Harry just doesn't want to fight!";
    }
    
    return 0;
}
