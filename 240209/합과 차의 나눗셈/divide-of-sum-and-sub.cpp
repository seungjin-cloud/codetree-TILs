#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    double res = static_cast<double>(a + b) / (a - b);
    res = round(res * 100.0) / 100.0;
    cout << res;
    return 0;
}