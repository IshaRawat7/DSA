//function overwriting or virtual function.

#include<iostream>
#include"bits/stdc++.h"
using namespace std;

class base{
    public:
    virtual void print(){  // to give baseptr the value of derived 
        cout<<"this is the base class's print function"<<endl;
    }
    void display(){
        cout<<"This is the base class's display function"<<endl;
    }
};
class derived: public base{
    public:
     void print(){
        cout<<"this is the derived class's print function"<<endl;
    }
    void display(){
        cout<<"This is the derived class's display function"<<endl;
    }
};
int32_t main(){
    base"baseptr"; // base pointer
    derived d; // derived object
    baseptr = &d; // giving basepointer value of derived 
    baseptr -> print(); // pointer accesed by arrow function
    baseptr -> display(); // pointer accesed by arrow function

return 0;
}