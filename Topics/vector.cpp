#include <iostream>
#include <vector>
using namespace std;

int main(){
    // declares an empty vector.
    vector<int> list;

    // fills the empty vector with value.
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);

    cout << "Vector elements: ";
    for (int i=0; i< list.size();i++){
        cout << list[i] << " ";
    }
    return 0;
}