#include <iostream>
using namespace std;

bool isPalindrome(int x){
    if(x<1){
        return false;
    }
    int rem;
    int ans=0;
    int num =x;
    while(num){
        rem=num%10;
        num/=10;
        ans=10*ans+rem;
    }
    if (x==ans) return true;
    else return false;
    
}

int main(){
    int num;
    cout << "enter a number: ";
    cin >> num;
    cout << boolalpha;
    cout << isPalindrome(num);

}