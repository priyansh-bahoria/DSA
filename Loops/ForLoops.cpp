// FOR LOOP EXAMPLES FOR BETTER UNDERSTANDING.
#include <iostream>
using namespace std;

void singularTable(){
    int n,i;
    cout << "Enter number: ";
    cin >> n;
// Basic For Loop
    for (i=1;i<=10;i++){
        cout <<n<<"*"<<i<<"= "<<n*i<<endl;
    }
}

void printTable(){
    int n,i,j, num;
    cout << "Print tables till: ";
    cin >> n;
// Multideminsional loop.
        for (num=1;num<=n;num++){
            for (i=1;i<=10;i++){
                cout <<num<<"*"<<i<<"= "<< num*i<< endl;
            }
            cout <<"########################"<< endl;
        }    
}

void powerQuestion(){
    int num,pow,i,n;
    cout << "Give me a number: ";
    cin >> num;
    cout << "Power of that number: ";
    cin >> pow;

    n = num;
    for (i=1; i<pow; i++){
        n = n*num;
    }
    cout << n;
}

void sumOfn(){
    //Sum of 'n' natural numbers.
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Brute force method
    // int sum = 0;
    // for (int i=1;i<=num;i++){
    //     sum = sum + i;
    // }

    cout << "Your sum is: "<< n*(n+1)/2;
}

void sumOfsquare(){
    //Sum of sqaure of 'n' natural numbers
    int n;
    cout <<"Enter a number: ";
    cin>>n;
    
    //Brute Force method
    // int sum =0;
    // for (int i=1;i<=n;i++){
    //     sum = sum + (i*i);
    // }
    // cout << sum;

    cout << "Output: "<< n*(n+1)*(2*n +1)/6;
}

//HW
void sumOfcube(){
    //Sum of cube of 'n' natural numbers.
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Output: "<< (n*(n+1)/2)*(n*(n+1)/2) ;

}

void factorial(){
    int n,i;
    cout << "Enter a number: ";
    cin>>n;

    int fact = 1;
    for (i=1;i<=n;i++){
        fact = fact * i;
    }
    cout << fact;
}

void prime(){
    int n;
    cout <<"Enter a number: ";
    cin >> n;
    
    if (n<2){
        cout << "Not a Prime number";
        return;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout <<"Not a Prime Number";
                return ;
            }
        }
        cout << "Number is prime";
    }  
}

void Fibonacci(){
    int n;
    cout << "how many term of fibonacci: ";
    cin >> n;

    int last, prev, curr;
    last =0;
    prev=1;
    cout << last <<" "<<prev<<" ";
    for (int i=3;i<=n;i++){
        curr = prev+last;
        last =prev;
        prev = curr;
        cout << curr<<" ";
    }
}

void nestedLoop(){
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

void pyramid(){
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
    Fibonacci();
    //sumOfcube();
    //printTable();
    //singularTable();
    //powerQuestion();
    return 0;
}