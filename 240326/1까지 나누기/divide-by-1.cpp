#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,divisor = 1;
    cin >> n;
    n /= divisor;
    while(n > 1){
        n /= ++divisor;
    }
    cout << divisor;
    return 0;
}