#include <iostream>

using namespace std;

int classify(int age , char sex){
    if(age >= 19 && sex == 'M'){return 1;}else{return 0;}
}

int main() {
    // 여기에 코드를 작성해주세요.
    int age_1,age_2;
    char sex_1,sex_2;
    cin >> age_1 >> sex_1;
    cin >> age_2 >> sex_2;
    if(classify(age_1,sex_1)+classify(age_2,sex_2) >= 1){cout<<"1";}else{cout<<"0";}
    return 0;
}