/*Stack Data Strcuture :
Stores a list of items inn which an item can be added to or removed from the list only at one end LIFO.
Implementing stack using array:
*/

#include<iostream>
using namespace std;
#define n 50
class stack{
 int* arr;
 int top;
   public:
   stack(){
    arr = new int[n];
    top = -1;
   }
   void push(int z){
    if(top == n-1){
        cout<<"Stack is full! Overflow";
        return;
    }
    top = top +1;
    arr[top] = z;
   }

   void pop(){
    if(top == -1 ){
        cout<<"Stack is empty ! Nothing to delete ! Underflow!";
        return;
    }
    int todelete = arr[top];
    top = top-1;
    delete todelete;

   }

   int Top(){
    if(top == -1){
        cout<<"No element present ! Stack Empty!";
        return -1;
    }
    return arr[top];
   }

   bool empty(){
  return top ==-1;
   }
   void display(){
    if(top == -1){
        cout<<"Stack Empty!"<<endl;
    }
    for(int i =n;i>0;i--){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
   }
};

int main(){
stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
cout<<st.Top()<<endl; // output : 5;
st.pop();
cout<<st.Top()<<endl; // output : 4

cout<<"Final Array of Stack is : "<<endl;
display(); // output : 4 3 2 1 
return 0;
}