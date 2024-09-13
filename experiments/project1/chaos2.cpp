// Game Over
// My "first" c++ program
#include <iostream>
using namespace std;


int main(){
    unsigned int score = 5000;
    cout << "score: " << score << endl;
    //changing the var
    score = score + 100;
    cout << "score: " << score << endl;
    //combining assignment operaator
    score += 100;
    cout << "score: " << score << endl;
    //increment
    int lives = 3;
    ++lives;
    cout << "lives: " << lives << endl;
    lives = 3;
    cout << "lives: " << lives << endl;
    int bonus = ++lives * 10;
    cout << "lives. bonus = " << lives << ". " << bonus << endl;
    lives = 3;
    bonus = lives++ * 10;
    cout << "lives. bonus = " << lives << ". " << bonus << endl;
    //целочисленное переполнение
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;
    return 0;
}