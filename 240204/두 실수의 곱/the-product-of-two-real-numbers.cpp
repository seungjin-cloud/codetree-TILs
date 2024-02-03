#include <iostream>
#include <iomanip>

int main() {
    float a = 5.26;
    float b = 8.27;

    // 결과를 소수점 셋째 자리까지 출력
    std::cout << std::fixed << std::setprecision(3) << a * b << std::endl;

    return 0;
}