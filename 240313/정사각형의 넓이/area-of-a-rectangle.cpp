#include <iostream>

using namespace std;

inline int square_area(int n) { return n * n; }

int main() {
    int n;
    cin >> n;
    n = square_area(n);
    if (n < 5)
    {
        cout << "tiny";
    }
    else
    {
        cout << n;
    }
}