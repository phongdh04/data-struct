#include<bits/stdc++.h>
using namespace std;

int * createArr (){
    int *r;
    r = new int [5];
    for (int i=0; i<5; i++){
        r[i]=i;
    }
    return r;
}

int main(){
    int *p;
    p = createArr();
    for (int i=0; i<5; i++){
        cout << p[i] << " ";
    }
    return 0;
}

