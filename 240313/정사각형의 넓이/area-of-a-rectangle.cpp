#include <iostream>

using namespace std;

inline int square_area(int n) { return n * n; }

int main() {
    int n;
    cin >> n;
    n = square_area(n);
    cout << n << endl;
    if (n < 5)
    {
        cout << "tiny";
    }
}