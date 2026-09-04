// we use function so that the code's readability and reuseablity can be increased.
#include <iostream>
using namespace std;

//bool prime (int n=3) now this has become a default parameter 

bool prime(int n)
{
    if(n<2) return 0;

    for(int i=2;i<n;i++){
        if (n%2==0) return 0;
    }
    return 1;
}

int factorial(int n) // Function declare
{ 
    int ans=1;       // Function define

    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;    
}

//function with two parameters
int sum(int x, int y)
{
    int ans=x+y;
    return ans;
}

int main(){
    int num,num1;
    cout<<"Enter a number: ";
    cin>>num;
    //cout << prime(num);
    //cout << factorial(num);
    

    //cout<<"Enter a numbers: ";
    //cin>>num>>num1;
    //cout << sum(num,num1);
}