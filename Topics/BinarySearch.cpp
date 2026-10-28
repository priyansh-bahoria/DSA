#include <iostream>
using namespace std;

int BinarySearch(int arr[],int target,int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        //int mid = (start+end)/2;
        int mid=((end-start)/2)+start; // This will prevent it from Interger Overflow

        if(arr[mid]==target)
        return mid;
        
        else if(arr[mid]<target)
        start = mid+1;

        else end=mid-1;
    }
    return -1;
}

int main(){
    // Binary always works on sorted arrays.
    int n;
    cout << "Enter the size of the array: ";
    cin>>n;
    
    int arr[100];
    cout<<"Enter the element for the array:\n";
    for(int i=0;i<n;i++) cin>>arr[i];

    //Sorting the array using insertion sort.
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);

            else break;
        }
    }
    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;

    int target;
    cout << "Enter the Target Element: ";
    cin>>target;

    cout<<BinarySearch(arr,target,n);

}