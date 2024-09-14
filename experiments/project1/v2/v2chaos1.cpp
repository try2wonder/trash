#include <iostream>
using namespace std;

int main(){
    int score;
    cout << "Enter your score: ";
    cin >> score;
    if (score >= 1000){
        cout << "1000 or more. Impressive\n";
    }
    else if (score >=500){
        cout << "more than 500, still not bad\n";
    }
    else if (score >=250){
        cout << "more than 250, still not bad\n";
    }
    else{
        cout << "less than 250. yikes\n";
    }
    return 0;

}
