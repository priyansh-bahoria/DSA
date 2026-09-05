// Difficulty: Easy
#include <iostream>
using namespace std;

//add two digits together 
// 38 --> 11 --> 2(output)
int addDigits(int num){
    while(num>9)
    {
        int rem,ans=0;
        while(num!=0)
        {
            rem=num%10;
            num/=10;
            ans+=rem;
        }
        num=ans;
    }
    cout<<num;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    addDigits(num);
    return 0;
}