#include<bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
    char x;
};

int main(){
    rectangle r1={10, 15, 'a'};
    // 12 thuc chat 9 byte 3 byte bo dem (padding);
    cout << sizeof(r1) << endl;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    // co the khai bao 1 mang cau truc
    return 0;
}

