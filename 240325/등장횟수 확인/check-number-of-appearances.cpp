#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    static int count = 0;
    int num;
    for(int i=0; i<5; i++){
        cin >> num;
        count += (num % 2 == 0)? 1:0;
    }
    cout << count;
    return 0;
}