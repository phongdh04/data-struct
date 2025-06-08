#include<bits/stdc++.h>
using namespace std;

// truyen tham so voi struct cung tuong tu nhu truyen tham so voi bien (value, address, reference) khac voi mang chi truyen duoc dia chi
// tuy nhien trinh bien dich phai ho tro truyen tham so bang value struct voi thanh vien la mang (khong khuyen khich)

struct arrayy {
    int a[5];
    int n;
};

void printArr (arrayy a1){
    for (int i=0; i<a1.n; i++){
        cout << a1.a[i] << " ";
    }
}

int main(){
    arrayy a = {{1, 2, 3, 4, 5}, 5};
    printArr(a);
    return 0;
}