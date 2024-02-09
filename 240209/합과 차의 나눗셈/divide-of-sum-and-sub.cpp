#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int a, b;
    std::cin >> a >> b;

    double result = static_cast<double>(a + b) / (a - b);
    result = round(result * 100) / 100; // 반올림하여 소수점 둘째 자리까지 표시

    std::cout << std::fixed << std::setprecision(2) << result << std::endl;

    return 0;
}