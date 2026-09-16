#include <iostream>
using namespace std;

// Question: Convert a lower alphabet into a Capital alphabet. 
char convert(char name){
    char ans= name-'a'+'A';
    return ans;
}

int main(){
    char name;
    cout<<"Enter a lower alphabet: ";
    cin>>name;

    cout<<convert(name);
}