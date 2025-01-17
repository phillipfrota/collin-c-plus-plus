#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;
char playagain;

int main()
{
    srand(time(0));
    string question;

    vector<string> answers
    {
        "No way.",
        "That's a no chief.",
        "Of course.",
        "The future looks a little blurry.",
        "Absolutely.",
        "No clue.",
        "Send someone a text to find out.",
        "I doubt it."
    };

    do{
        cout << "What is your question to the all knowing Magic 8 ball?\n";
        getline(cin, question);

        cout << "\n";
        int randomIndex = rand() % answers.size();
        cout << "Magic 8 ball says... " << answers[randomIndex] << endl;
        cout << "Would you like to know the future again? y/n?: ";
        cin >> playagain;
        cin.ignore();
        
    }while(playagain == 'Y' || playagain == 'y');

    return 0;
}