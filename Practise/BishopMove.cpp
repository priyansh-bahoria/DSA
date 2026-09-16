#include <iostream>
using namespace std;
// Bishop(oot) moves only diagonally and a chess board is 8*8
// Question: 

int bishop(int a, int b){
    int count=0;
    count+= min(8-a,b-1); //low left
    count+= min(a-1,b-1); //up left
    count+= min(8-a,8-b); //low right
    count+= min(a-1,8-b); //up right

    return count;
}

int main(){
int a,b;
cout << "Enter a: ";
cin>>a;
cout<<"Enter b: ";
cin>>b;
cout<< bishop(a,b);

}