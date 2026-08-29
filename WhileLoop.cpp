#include <iostream>
using namespace std;

void basic(){
    int i=1;
    while(i<=10){
        cout << i<<" ";
        i++;
    }
}

void table(){
    int n;
    cout <<"Enter a number: ";
    cin>>n;
    int i=1;
    while(i<=10){
        cout<< n<<"*"<<i<<" = "<<n*i<<endl;
        i++;
    }
}

void factor(){
    int n;
    cout <<"Enter a number: ";
    cin>>n;

    int i=1;
    while (i<=n){
        if (n%i==0) cout << i<<endl;
        i++;
    }
    
}
//HW
void OddEven(){
    int n;
    cout <<"Enter a number: ";
    cin >>n;

    int i=1;
    while(i<=n){
        if(i%2==0) cout <<i<<" : Even"<<endl;
        else if (i%2!=0) cout<<i<<" : Odd"<<endl;
        i++;    
    }
}

// Do-While Statement
void doWhile(){
    //Sum of n natural number
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i=1;
    int sum=0;
    do{
        sum = sum+i;
        i++;
        
    }while(i<=n);
    cout << sum;
}

//Break: break the loop acc to the codition. 
void Break(){
    int i=1;
    while(i<=10){
        if (i==5) break;
        cout << i << endl;
        i++;
    }
}

//Continue: skip a iteration acc to the condition.
void Continue()
{
    for(int i=1;i<=10;i++){
        if (i%4==0) continue;
        cout << i << endl;
    }
}

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