// we use function so that the code's readability and reuseablity can be increased.
#include <iostream>
#include <vector>
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

int Naturalsum(int n){
    int ans = n*(n+1)/2;
    return ans;
}

int NaturalsumCube(int n){
    int ans= (n*(n+1)/2)*(n*(n+1)/2);
    return ans;
}

int GCD(int a, int b){
    while(a>0 && b>0){
        if (a>b) a=a%b;
        else b=b%a;

    }
    if (a==0) return b;
    else return a;
}

int MissingNum(){
    int arr[]={1,2,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sumA=0;
    for(int i=0;i<n-1;i++)
    {
        sumA+=arr[i];
    }
    cout<<sumA<<endl;
    int sumN = n*(n+1)/2;
    cout<<sumN<<endl;
    int result = sumN-sumA;

    return result;
}

int FibonacciSeries(int n){
    int arr[n];
    // arr[0]=0;
    // arr[1]=1;
    //cout<<arr[0]<<" "<<arr[1]<<" ";
    int i;
    for(i=0;i<2;i++){
        if(i=0){
            
        }
        else{
            cout<<1<<" ";
        }
    }
    for(i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
        cout<<arr[i]<<" ";
    }
    // cout<<arr[n-1];
    

}

int main(){
    int num;
    cin>>num;
    FibonacciSeries(num);
}