// Difficulty: Easy
#include <iostream>
using namespace std;

bool canWinNim(int n){
    if(n%4==0) return false;
    else return true;
}

int main(){
    int num;
    cin>>num;
    cout<<canWinNim(num);
}