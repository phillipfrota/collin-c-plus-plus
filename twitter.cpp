// Calculate and display how many followers Kalen Deboer gained in a week and how many total followers he had right after the Alabama announcement
// Phillip Frota
// 9/13/2024

#include <iostream>
using namespace std;

int main() {

    int startingFollowers, newFollowers, totalFollowers;

    startingFollowers = 49800;
    cout << "Kalen Deboer started 2024 with " << startingFollowers << " followers.\n";
    
    newFollowers = startingFollowers * 0.42;
    cout << "He gained " << newFollowers << " followers after the Alabama announcement.\n";

    totalFollowers = startingFollowers + newFollowers;
    cout << "He ended that week with " << totalFollowers << " total followers.";
    
    return 0;
}
