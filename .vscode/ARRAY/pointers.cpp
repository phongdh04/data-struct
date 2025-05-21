#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main(){
    int a=10;
    // * su dung khi huy tham chieu hoac khai bao contro
    int *p = &a;
    cout <<"value of a: "<<a << endl;
    cout <<"address of a get by b: " << p << endl;
    cout <<"address of a get by &a: " << &a << endl;
    // di den dia chi cua a va lay gia tri cua no ra
    cout <<"value of a get by p: "<<*p << endl;
    int * accessToHeap;
    // c
    accessToHeap = (int*)malloc(5*sizeof(int));
    cout << "access to heap by accessToHeap: " << accessToHeap<< endl;
    int * accessToHeapInCpp;
    // c++
    accessToHeapInCpp=new int[5];

    cout << "access to heap by accessToHeap In Cpp: " << accessToHeap<< endl;
    cout << "------------------------------"<< endl;
    // khoi tao trong stack
    int arr[5]={1, 2, 3, 4, 5};
    int *pointer; 
    // gan dia chi dau tien cua mang vao pointer
    pointer=arr; // or pointer = &arr[0];
    cout << "address of head arr: " << pointer << endl;
    // truy cap cac phan tu cua mang dung contro
    cout << "access arr by pointer: ";
    for (int i=0; i<5; i++){
        cout << pointer[i] << " ";
    }
    cout << "------------------------------"<< endl;
    int * arrHeap; // khai bao contro o stack
    arrHeap = new int[5]; // noi con tro toi bo nho heap
    for (int i=0; i<5; i++){
        arrHeap[i]=1;
    }
    cout << "access arrHeap in Heap: ";
    for (int i=0; i<5; i++){
        cout << arrHeap[i] << " ";
    }
    //free(arrHeap) in C
    delete [] arrHeap;

    cout << "------------------------------"<< endl;
    cout << "pointer have 8 byte data";
    return 0;
}