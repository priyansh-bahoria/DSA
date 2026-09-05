#include <iostream>
using namespace std;

void array(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // sizeof (arr) = total byte occupied by the array
    // sizeof (arr[0]) = which is an integer (10) occupying 4 bytes.
    int n =sizeof (arr)/sizeof (arr[0]);
    cout <<"Array elements: ";
    for (int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
};

int main(){
    array();
}