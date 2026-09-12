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

// finding the maximum element in the array
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

// finding the minimum element in the array
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

// Search an element in the array
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

// reverse an array
void revArray(){
    int arr[]={1,2,3,4,5,45,78,45,96,15,24,64,82,4598};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end = size-1;
    while (start<end){
        swap(arr[start],arr[end]);
        end--;
        start++;
    }
    for (int i=0;i<size;i++)
    {
        cout << arr[i]<<" ";
    }
}

int main()
{
    revArray();
}