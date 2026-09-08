#include <iostream>
#include <cmath>
using namespace std;

int count (int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;

}

bool armstrong(int num, int digit){
    int power,rem,ans=0,n=num;
    while(n){
        rem=n%10;
        n/=10;
        // round() is to prevent floating point error.
        power=round(pow(rem,digit));
        ans=ans+power;
    }
    if(ans==num)
    return 1;
    else 
    return 0;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    // Count Digits
    int digit=count(num);

    // Identifying Armstrong digit
    cout<<armstrong(num,digit);
}