#include <iostream>
using namespace std;

// Question: if 2 side of diagram and other 2 are same then it is a rectangle. 

int IsRectangle(int a,int b,int c,int d){
    if((a==b && c==d)||(a==c&&b==d)||(a==d&&b==c))
    {
        return true;
    }
    else return false; 
}

int main(){
    int a,b,c,d;

    cout <<"enter a:";
    cin>>a;
    cout <<"enter b:";
    cin>>b;
    cout <<"enter c:";
    cin>>c;
    cout <<"enter d:";
    cin>> d ;

    cout << IsRectangle(a,b,c,d);

}