#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            
            if(arr[index]>arr[j])
            index=j;
        }
        swap(arr[index],arr[i]);
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

void InsertionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){

            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);

            else
            break;
        }
    }
    for (int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}

void BubbleSort(int arr[],int n){
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){

            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];
    cout << "Enter the array elements: \n";
    for(int i=0;i<n;i++)
    cin >> arr[i];
 
    BubbleSort(arr,n);

}