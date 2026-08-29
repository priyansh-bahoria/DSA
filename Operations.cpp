#include<iostream>
using namespace std;

//Logical operations
void ORop(){ // Ek true = sare true

    for(char name='a';name<='z';name++){
        if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u'){
            cout<<name<<": Vowel"<<endl;
        }
        else cout<<name<<": Consonant"<<endl;
    }
}

void ANDop(){ //ek False = sare False
    int a,b,c,d;
    a=10;
    b=4;
    c=9;
    d=8;
    if(a>b && a>d && a>c) cout << "Yes";
    else cout << "No";
}

//bitwise operations


int main(){
    ANDop();

    return 0;
}