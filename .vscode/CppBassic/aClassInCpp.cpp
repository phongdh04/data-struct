#include<bits/stdc++.h>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth; 

    public: 
    int getLength (){
        return this->length;
    }
    int getBreadth (){
        return this->breadth;
    }
    void setLength(int l){
        this->length=l;
    }
    void setBreadth(int b){
        this->breadth=b;
    }
    rectangle(){
        this->length=0;
        this->breadth=0;
    }
    rectangle (int l, int b){
        this->length=l;
        this->breadth=b;
    }
    int area (){
        return this->length*this->breadth;
    }
};

int main(){
    rectangle r(5, 3);
    cout << r.area();
    return 0;
}

