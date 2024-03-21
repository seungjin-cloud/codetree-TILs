#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a>b){swap(a,b);}
    for (int i = b; i >= a; i--) {
        if (i % 2 == 1) { cout << i << " "; }
    }
}