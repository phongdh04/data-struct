#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={12, 15, 25};
    // co the khai bao the nay
    int b[]={1, 2, 3, 4, 5, 6};
    // khai bao 10 phan tu bang 0
    int c[10]={0};
    cout << sizeof(a)<< endl;
    cout << a[1]<< endl;
    printf("%d\n", a[2]);
    for (int x:a){
        cout << x << " ";
    }
    return 0;
}

