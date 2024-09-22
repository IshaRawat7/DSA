// operator overloading

#include<iostream>
#include"bits/stdc++.h"
using namespace std;
class complex{
    private:
    int real,img;
    public:
    complex(int r=0,int i=0){
        real = r;
        img = i;

    }
    complex operator + (complex const &obj){
        complex result;
        result.img = img + obj.img;
        result.real = real + obj.real;
        return result;
    }
    void display(){
        cout<<real<<" +  i"<<img<<endl;
    }
};


int main(){
    complex c1(12,7), c2(6,8);
    complex c3 = c1+c2;
    c3.display();

return 0;
}