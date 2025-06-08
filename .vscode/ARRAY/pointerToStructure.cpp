#include<bits/stdc++.h>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

int main(){
    rectangle r = {10, 5};
    cout << r.length << " " << r.breadth << endl;
    // truy cap vao length va breadth thong qua con tro
    rectangle *p=&r;
    cout << p->length << " " << p->breadth << endl;
    
    cout << "---------------------------";
    rectangle *pointerInHeap;
    pointerInHeap=new rectangle;
    pointerInHeap->length=15;
    pointerInHeap->breadth=10;
    return 0;
}

