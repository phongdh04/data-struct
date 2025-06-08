#include<bits/stdc++.h>
using namespace std;

// hoat dong voi moi loai du lieu ma khong can viet class khac
template<class T>
class rectangle{
    private:
    T length;
    T breadth; 
    public:
    rectangle (T l, T b); 
    T area();
};
template<class T>  
rectangle<T>::rectangle (T l, T b){
    this->length=l;
    this->breadth=b;
}
template<class T>  
T rectangle<T>::area(){
    return this->length*this->breadth;
}
int main(){
    rectangle<int> r (5, 3);
    cout << r.area();
    return 0;
}

