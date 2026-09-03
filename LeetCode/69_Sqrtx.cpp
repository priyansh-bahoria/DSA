#include <iostream>
using namespace std;

int Sqrt(int num){
    int high=num;
    int low=1;
    int mid;
    while(low<=high){
        // For preventing overflow in high + low
        mid=low+(high-low)/2;
        // for preventing overflow in mid*mid
        if(mid<=num/mid){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<high;
}


int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    Sqrt(num);
    return 0;
}
