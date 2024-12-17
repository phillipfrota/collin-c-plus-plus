// Make a fun word game where the user supplies random values and those values are placed in slots in a story line
// Phillip Frota
// 09/28/24


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string country, team, number, name;

    cout << "Enter a country: ";
    getline(cin, country); 
    cout << "Enter a team: ";
    getline(cin, team);
    cout << "Enter a number: ";
    getline(cin, number);
    cout << "Enter an player name: ";
    getline(cin, name);


    cout << "\nIt's time to tell your future!\n";
    cout << "You have moved to " << country << " to play soccer for " << number << " years!\n";
    cout << "Suddenly, you get an offer to play for the " << team << " with famous soccer player " << name << "! Congratulations!";

    return 0;
}