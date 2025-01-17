// Ask the user for a whole number of dollars to convert into two cryptocurrencies: Bitcoin and Dogecoin.
// Phillip Frota
// 9/25/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    const double BTC_PER_DOLLAR = .000023;
    const double DOGE_PER_DOLLAR = 12.81;
    int dollars;

    cout << "Please enter a dollar amount to convert into Bitcoin and Dogecoin:\n";
    cin >> dollars;

    cout << "Using the conversion rates of 2.3e-05 Bitcoin per dollar and 12.81 Dogecoin per dollar:\n";
    cout << setprecision(3) << fixed;
    cout << "\n" << dollars << " dollars = " << dollars * BTC_PER_DOLLAR << " Bitcoin.\n";
    cout << dollars << " dollars = " << dollars * DOGE_PER_DOLLAR << " Dogecoin.";    

    return 0;
}