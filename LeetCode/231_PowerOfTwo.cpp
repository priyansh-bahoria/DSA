#include <iostream>
using namespace std;

int IsPowerOfTwo(int n){
    if (n<1) return 0;

    while(n!=1){
        if(n%2==1) return 0;
        n/=2;
    }
    return 1;
}

int main(){
    int num;
    cout<<"Enter a num: ";
    cin>>num;
    cout << IsPowerOfTwo(num);
    return 0;
}