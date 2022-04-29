// teranery (conditional) operators
// Build a guessing game app

#include <iostream>

using namespace std;

int main()
{
    int hostNum , guestGuess;
    cout << "Host : \n" ;
    cin >> hostNum ;
    
    system("clear");

    cout << "Guest :\n";
    cin >> guestGuess ;

    if (hostNum == guestGuess)
        cout << "Correct!\n";
    else 
        cout << "Failed!\n";    



    return 0;
}