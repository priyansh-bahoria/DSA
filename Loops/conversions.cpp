#include <iostream>
using namespace std;

// Decimal to Binary Conversions
void WhileBinary(){
    int num;
    cout <<"Enter a Decimal num: ";
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
    cout<<"Enter a Decimal num: ";
    cin>>num;
    int rem,ans=0,mul=1;
    for(num;num>0;num=num/2){
        rem=num%2;
        ans+=rem*mul;
        mul*=10;
    }
    cout<<ans;
}

//Binary to Decimal Conversions
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
    cout<<"Decimal:" << ans;
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
    cout<<"Decimal: "<<ans<<endl;
}

//Octal Conversion

void DecimalToOctal(){
    int num;
    cout<<"Enter a decimal num: ";
    cin>>num;
    int rem,ans=0,mul=1;
    for(num;num>0;num/=8){
        rem=num%8;
        ans+=rem*mul;
        mul*=10;
    }
    cout <<"Octal: "<< ans;
}
void BinaryToOctal(){
    //binary to decimal
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rem,ans=0,mul=1;
    for(num;num>0;num/=10){
        rem=num%10;
        ans+=rem*mul;
        mul*=2;
    }
    //decimal to octal
    //int num2=ans;
    int rem2,mul2=1;
    int result=0;
    for(ans;ans>0;ans/=8){
        rem2=ans%8;
        result+=rem2*mul2;
        mul2*=10;
    }
    cout<<"octal: "<<result;
}

int main(){
    BinaryToOctal();
    return 0;
}