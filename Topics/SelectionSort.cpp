#include <iostream>
using namespace std;

// it starts from the front of the array
void SelectionInc(){
    int arr[1000];
    int n;
    cout << "Enter the size of array:";
    cin>>n;
    cout << "Enter the array elements:\n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}

// it starts from the back of the array
void SelectionDec(){
    int arr[1000];
    int index;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=n-1;i>=1;i--){
        index=i;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[index]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    SelectionInc();
}