#include <iostream>
using namespace std;

void binary(){
    int num;
    cout <<"Enter a number: ";
    cin >>num;
    int rem,ans=0,mul=1;
    while(num>0){
        rem=num%2;
        num/=2;
        ans+=rem*mul;
        mul*=10;
    }
    cout << "Binary: "<<ans << endl;
}

int main(){
    binary();
    return 0;
}