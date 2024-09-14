// Game Over
// My "first" c++ program
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;
    //getting info
    cout << "welcome to Lost Fortune\n\n";
    cout << "Please enter the following for your personalized adventure\n";
    cout << "Enter a number: ";
    cin >> adventurers;
    cout << "Enter a number, smaller tan the first: ";
    cin >> killed;
    survivors = adventurers - killed;
    cout << "Enter your last name: ";
    cin >> leader;
    return 0;
}
