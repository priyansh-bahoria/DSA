// Difficulty: Medium
#include<iostream>
#include <vector>
using namespace std;

int searchRange(){

    int n;
    cout <<"Enter the size of the array: ";
    cin>>n;
    
    int arr[100];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<endl;
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    
    int first=-1;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=((end-start)/2)+start;
        if(arr[mid]==target){
            first = mid;
            end = mid-1;
        }
        else if(arr[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }
    
    int last=-1;
    start=0;
    end=n-1;
    while(start<=end){
        int mid=((end-start)/2)+start;
        if(arr[mid]==target){
            last = mid;
            start = mid+1;
        }
        else if(arr[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }
    //I DON'T KNOW HOW TO PRINT THIS SHIT.

    // vector<int>a(2);
    // a[0]=first;
    // a[1]=last;

    // return a;
    
    
}

int main(){
    cout<<searchRange();
}