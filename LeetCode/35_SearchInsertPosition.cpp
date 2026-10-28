// Difficulty: Easy
#include <iostream>
using namespace std;

int searchInsert(){
    int n=5;
    int arr[n]={1,3,5,6};

    int target=2;
    int start=0,end=n-1;
    int index=n;
    while(start<=end){
        int mid=((start-end)/2)+end;
        if(arr[mid==target]) return mid;
        else if(arr[mid]>target){
            index=mid;
            end=mid-1;
        }
        else start=mid+1;
    }
    return index;
}

int main(){
    cout << searchInsert();
}