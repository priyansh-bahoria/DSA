#include <iostream>
using namespace std;


void num_pyramid(){
    int row,col,n;
    cout << "Enter a number: ";
    cin>>n;

    for(row=1;row<=n;row++){
        //space
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        //inc num
        for(col=1;col<=row;col++){
            cout<<col<<" ";
        }
        //dec num
        for(col=row-1;col>=1;col--){
            cout<<col<<" ";
        }
        cout << endl;
    }
}

void rev_pyramid(){
    int row,col,n;
    cout << "Enter a number: ";
    cin>>n;

    for(row=n;row>=1;row--){
        //space
        for(col=0;col<=n-row;col++){
            cout<<"  ";
        }
        for(col=1;col<=2*row-1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void rev_diamond(){
    int row,col,n;
    cout<<"Enter the number: ";
    cin>>n;

    for(row=n;row>=1;row--){
        
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=1;col<=(2*n)-(2*row);col++){
            cout<<"  ";
        }
        for(col=row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
        
    }
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=1;col<=(2*n)-(2*row);col++){
            cout<<"  ";
        }
        for(col=row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }

}

void bow(){
    int row,col,n;
    cout << "Enter a number: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=1;col<=2*n-2*row;col++){
            cout<<"  ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=1;col<=2*n-2*row;col++){
            cout<<"  ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void diamond(){
    int row,col,n;
    cout<<"enter a number: ";
    cin>>n;


    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main(){
    bow();

}