// Difficulty: Easy
#include <iostream>
using namespace std;

int BitwiseComplement(int n){
    
    int rem;
    int ans=0;
    int mul=1;

    if (n==0){
        return 1;
    }
    while(n){
        rem=n%2;
        rem=rem ^ 1;
        n/=2;
        ans+=rem*mul;
        mul*=2;
    }
    return ans;

}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout << BitwiseComplement(num);

    return 0;
}
