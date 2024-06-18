#include <iostream>

using namespace std;

void makeSquare(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin >> n;
    makeSquare(n);
    cout<<endl;
    makeSquare(n);
    return 0;
}