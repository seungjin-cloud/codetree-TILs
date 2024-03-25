#include <iostream>

using namespace std;

inline bool con1(int a){ return (a%2==0)&&(a%4!=0);}
inline bool con2(int a){ return (a/8)%2==0; }
inline bool con3(int a){ return (a%7)<4; }

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin>> a;
    for(int i=1;i<=a;i++){
        if(con1(i)==false&&con2(i)==false&&con3(i)==false){ cout<<i<<" "; }
    }

    return 0;
}