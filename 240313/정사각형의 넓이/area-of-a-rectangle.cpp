#include <iostream>

using namespace std;

inline int square_area(int n) { return n * n; }

int main() {
    int n;
    cin >> n;
    cout << square_area(n) << endl;
    if (n < 5)
    {
        cout << "tiny";
    }
}