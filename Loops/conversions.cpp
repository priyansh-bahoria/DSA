#include <iostream>
using namespace std;

// Binary to Decimal Conversions
void WhileBinary(){
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
void ForBinary(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rem,ans=0,mul=1;
    for(num;num>0;num=num/2){
        rem=num%2;
        ans+=rem*mul;
        mul*=10;
    }
    cout<<ans;
}

//Decimal to Binary Conversions
void WhileDecimal(){
    int num;
    cout<<"Enter a binary num: ";
    cin>>num;
    int rem,ans=0,mul=1;
    while(num>0){
        rem=num%10;
        num/=10;
        ans+=rem*mul;
        mul*=2;
    }
    cout<<ans;
}
void ForDecimal(){
    int num;
    cout<<"Enter a Binary num: ";
    cin>>num;

    int rem,ans=0,mul=1;
    for(num;num>0;num/=10){
        rem=num%10;
        ans+=rem*mul;
        mul*=2;
    }
    cout<<ans<<endl;
}




int main(){
    ForBinary();
    return 0;
}