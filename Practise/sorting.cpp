#include <iostream>
using namespace std;

void insertiondec(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[1000];
    for(int i=0;i<n;i++)
    cin>>arr[i];


}

void insertionrev(){
    int n=5;
    int arr[n]={7,5,2,4,3};
    for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[j-1]) swap (arr[j],arr[j-1]);
            else break;
        }
    }

    for (int i=0;i<n;i++) cout << arr[i];
}

int main(){
    insertionrev();
}