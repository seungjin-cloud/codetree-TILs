#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    float res = static_cast<float>(a + b) / (a - b) * 100.0;
    res = round(res) / 100.0;
    cout << res;
    return 0;
}