#include <iostream>
using namespace std;

void Sqrt(int num){
    int high=num;
    int low=1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        int val=mid*mid;
        if(val<=num){
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