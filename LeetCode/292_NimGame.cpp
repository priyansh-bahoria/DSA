// Difficulty: Easy
#include <iostream>
using namespace std;

// Game of number, each player can only move 1-3 at a time and 
bool canWinNim(int n){
    if(n%4==0) return false;
    else return true;
}

int main(){
    int num;
    cin>>num;
    cout<<canWinNim(num);
}