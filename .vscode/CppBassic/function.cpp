#include<bits/stdc++.h>
using namespace std;

void swapPassingParameterValue (int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void swapPassingParameterAddress(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


void swapPassingParameterReference(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    int a=10;
    int b=20;
    swapPassingParameterValue(a, b);
    cout << a << " " << b << endl;
    swapPassingParameterAddress(&a, &b);
    cout << a << " " << b << endl;
    // a=20, b=10;
    a=10;
    b=20;
    swapPassingParameterReference(a, b);
    cout << a << " " << b << endl;
    return 0;
}

