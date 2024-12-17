// Create a multiplication table to help your younger sibling
// Phillip Frota
// 10/26/2024


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int rows, columns;
    
    cout << "Multiplication Table Tool\n\n";
    cout << "How many rows would you like? ";
    cin >> rows;
    cout << "How many columns would you like? ";
    cin >> columns;
    cout << "\n\n";


    cout << "     ";
    for (int i = 1; i <= columns; ++i) {
        cout << setw(4) << i;
    }
    cout << endl;

    cout << "   ";
    for (int i = 1; i <= columns; ++i) 
    {
        cout << "-----";
    }
    cout << endl;

    for (int i = 1; i <= rows; ++i) 
    {
        cout << setw(3) << i << " |";
        for (int j = 1; j <= columns; ++j) 
        {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}