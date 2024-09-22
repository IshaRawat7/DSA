//polymorphism
/*many -forms = polymorphism

types
1.compile time 
1.1 function overloading:- different function with same names and have different number of arguments or  diff type of argument
1.2 operator overloading :- functionality definiton of operator
2.Run time
2.1 Virtual Functions:-function having virtual with it is not called and function not having virtual with it is called.

*/


// function overloading
#include<iostream>
#include"bits/stdc++.h"
using namespace std;
class college{
    public:
    void fun(){
        cout<<"i am a function with no argument"<<endl;
    }
    void fun(int x){
        cout<<"I am a function with int argument"<<endl;
    }
    void fun(double x){
        cout<<"I am a function with double argument"<<endl;
    }

}
int32_t main(){
  college obj;
  obj.fun();
  obj.fun(4);
  obj.fun(6.2);
return 0;
}