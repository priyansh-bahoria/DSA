// Difficulty: Easy
#include <iostream>
using namespace std;

// Number Game
// Each player can only move 1-3 at a time.
// last person wins.

bool canWinNim(int n){
    if(n%4==0) return false;
    else return true;
}

int main(){
    int num;
    cin>>num;
    cout<<canWinNim(num);
}