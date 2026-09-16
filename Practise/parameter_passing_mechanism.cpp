#include <iostream>
using namespace std;

// Pass by value
void incre(int n){ // creates a copy and 
    n++;
}

// Pass by reference
void increment(int &n){ // direct access of data in the memory (int &n)
    n++;
}

void Swap(int &a,int &b){
    int c;
    c=b;
    b=a;
    a=c;
}

int cube(int n){
    int ans;
    ans=n*n*n;
    return ans;
}

int reverse(int n){
    int sign=1, ans=0,rem,mul=1;
    
    if (n < 0) {
        sign = -1;
        n = -n;
    }

    while(n){
        rem=n%10;
        n/=10;
        if(rem>=5000/mul) return 0;
        ans=ans*mul+rem;
        mul*=10;
    }
    return ans*sign;
}

int main()
{
    int a;
    int b;
    cin >> a;
    cout<<reverse(a);

}