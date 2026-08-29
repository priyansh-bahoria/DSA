#include <iostream>
using namespace std;

void decimal(){
    int num=1101;
    int rem,ans=0,mul=1;
    while(num>0){
        rem=num%10;
        num/=10;
        ans+=rem*mul;
        mul*=2;
    }
    cout<<ans;
}

int main(){
    decimal();
    return 0;
}