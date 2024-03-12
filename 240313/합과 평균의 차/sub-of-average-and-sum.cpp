#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int a, b, c;
    cin >> a >> b >> c;

    // line 1
    int sum = a + b + c;
    cout << sum << endl;

    //line 2
    int avg = sum / 3;
    cout << avg << endl;

    //line 3
    cout << sum - avg;
    return 0;
}