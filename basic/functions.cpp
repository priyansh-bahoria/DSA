// we use function so that the code's readability and reuseablity can be increased.
#include <iostream>
using namespace std;

bool prime(int n){
    if(n<2) return 0;
    for(int i=2;i<n;i++){
        if (n%2==0) return 0;
    }
    return 1;
}

int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;    
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    //cout << prime(num);
    cout << factorial(num);
}