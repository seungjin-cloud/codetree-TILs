#include <iostream>
#include <algorithm>

using namespace std;

void selected_sort(int* a){
    for(int i=0;i<3;i++){
        int j = i;
        for(int k=i+1;k<3;k++){
            if(a[k]<a[j]) j=k;
        }
        swap(a[i],a[j]);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int medium[3];
    for(int i=0;i<3;i++){
        cin >> medium[i];
    }
    selected_sort(medium);
    cout<<medium[1];

    return 0;
}