// Difficulty: Easy
#include<iostream>
using namespace std;

int targetIndices(){
    int target = 5;
    int n = 5;
    int arr[]={5,1,2,3,5};

    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            cout << i;
        }
    }


}

int main(){
    targetIndices();
}