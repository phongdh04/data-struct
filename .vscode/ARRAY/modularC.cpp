#include<bits/stdc++.h>
using namespace std;

// cap do lap trinh cao nhat trong c
// neu dung c khoi tao trong heap bang malloc

struct rectangle{
    int length;
    int breadth;
};

    void addLandB (rectangle *r, int l, int b){
        r->length=l;
        r->breadth=b;
    }

    int area (rectangle *r){
        return r->breadth*r->length;
    }

    void changeLength (rectangle *r, int l){
        r->length=l;
    }


int main(){
    rectangle *p;
    cout << sizeof(p) << endl;
    p = new rectangle;
    addLandB(p, 5, 3);
    cout << area(p);
    return 0;
}

