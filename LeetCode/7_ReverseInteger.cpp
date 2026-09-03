#include<iostream>
#include <climits>
using namespace std;

int reverse(int x){
    int rem,ans=0;
    while(x){
        rem=x%10;
        x/=10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10) cout << "Not Computable!";
        ans=ans*10+rem; // integer overload
    }
    return ans;
}

int main(){
    int num;
    cout<<"number: ";
    cin>>num;
    cout << reverse(num);
    return 0;
}
