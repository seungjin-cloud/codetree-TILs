#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int phoneNum_head, phoneNum_firstSeg, phoneNum_secondSeg;
    cin >> phoneNum_head;
    cin.get();
    cin >> phoneNum_firstSeg;
    cin.get();
    cin >> phoneNum_secondSeg;
    cout << "0" <<phoneNum_head << "-" << phoneNum_secondSeg << "-" << phoneNum_firstSeg;
    
    return 0;
}