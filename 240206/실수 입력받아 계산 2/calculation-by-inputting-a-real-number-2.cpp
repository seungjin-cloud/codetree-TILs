#include <iostream>
#include <iomanip>
int main() {
    // 여기에 코드를 작성해주세요.
    double a;
    std::cin >> a;
    std::cout << std::fixed << std::setprecision(2) << a+1.5;
    return 0;
}