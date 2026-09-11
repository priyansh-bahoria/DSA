#include <iostream>
using namespace std;

// for me to experiment dif things
void array(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    //char arr[9]={'a','b','c','d','t','g','y','u','i'};
    // sizeof (arr) = total byte occupied by the array
    // sizeof (arr[0]) = an integer occupying 4 bytes.
    int n =sizeof (arr)/sizeof (arr[0]);
    for (int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
}

int MaxElement(){
    int arr[5]={154,6969,4,1,5};
    int ans = arr[0];
    for (int i=0;i<5;i++)
    {
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    return ans;
}

int MinElement(){
    int arr[]={154,6969,4,1,5};
    int ans = arr[0];
    // if i don't know the size of arry
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;i++)
    {
        if(arr[i]<ans){
            ans = arr[i];
        }
    }
    return ans;
}

int SearchElem(){
    int n;
    cin>>n;
    int arr[]={1,67,69,85,45,66,48,56};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=-1;
    for (int i=0;i<size;i++)
    {
        if(arr[i]==n){
            ans=i;
            break;
        }
    }
    return ans;
}

void revArray(){
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=size-1;i>=0;i--)
    {
        cout << arr[i]<<" ";
    }
}

int main()
{
    revArray();
}