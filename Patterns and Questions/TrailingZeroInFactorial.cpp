#include <iostream>
using namespace std;

// Question: We have to count zeros in factorial.
// Logic: if a number contains 5^i in its factorial then zero will appear i number of times. 

int trailingZeroInFactorial(int n){
    int count=0;

    while(n>=5){
        count+=n/5;
        n/=5;
    }
    return count;
}

int main(){
    int num;
    cin>>num;
    cout<<trailingZeroInFactorial(num);

}