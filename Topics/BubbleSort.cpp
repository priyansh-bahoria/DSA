#include <iostream>
using namespace std;

void bubblesort(){
    //user input
    int n;
    cout <<"Enter the size of the array: ";
    cin >> n;
    int arr[1000];
    cout <<"Enter the array elements:\n";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    bool swapped =0;
    //Code implementaion of bubble sort

    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        // so that is doesn't run unnessesary for a sorted array.
        if(swapped==0) break;
    }


    // printing the sorted array
    for (int i=0;i<n;i++){
        cout <<arr[i]<< " ";
    }
}

int main(){
    bubblesort();
}