
//inheritance

/*

there are 2 classes
1.Derived class(child)
2.Base class(parent)



types of inheritance
1.Single inheritance -:  class A{
    public:
    void func(){
        cout<<"inherited";
    }
    };
    class B : public A {
        public:
    };
    int main(){
         B b;
        b.func();
    }

2.Multiple inheritance
class A{
    public:
    void funcA(){
        cout<<"INherited\n";
    }
};
class B{
    public:
    void funcB(){
        cout<<"fun b\n";
    }
};
class C: public A,public B{
public:
};

int main(){
     C c;
    c.funcA();
    c.funcB();
}
3.Multi level inheritance
class A{
    public:
    void funcA(){
        cout<<"YEs its true"<<endl;
    }
};
class B : public A{
    public:
    void funcB(){
        cout<<"B function\n";
    }
};
class C : public B{
    public:
};
int main(){
     C c;
    c.funcA();
    c.funcB();
}
4.Hybrid inheritance

5.Hierarchical inheritance
*/

#include<iostream>
using namespace std;
int main(){

return 0;
}