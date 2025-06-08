#include<bits/stdc++.h>
using namespace std;

// arr khong bao gio truyen duoi dang gia tri ma phai truyen qua dia chi
// vi truyen qua dia chi nen moi thay doi o ham se thay doi truc tiep gia tri cua tham so thuc te
void printArr (int n, int *a){
    cout << a << endl;
    int *p = &a[0];
    cout << p << endl;
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int a[5]={1, 2, 3, 4, 5};
    printArr(5, a);
    return 0;
}

