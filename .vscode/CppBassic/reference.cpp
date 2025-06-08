#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    // a va r co cung 1 dia chi o nho chua gia tri la 10;
    int & r=a;
    // khong the thay doi tham chieu
    // b= 20 
    // r=b -> a=r=20
    a=25;
    cout << a << endl;
    cout << r;
    return 0;
}

