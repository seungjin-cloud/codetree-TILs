#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age,num=0,sum=0;
    while(true){
        cin>>age;
        if(age<20 || age>29){break;}
        sum += age;
        num++;
    }

    cout << fixed;
    cout.precision(2);
    cout << (double)sum/num << endl;
    return 0;
}