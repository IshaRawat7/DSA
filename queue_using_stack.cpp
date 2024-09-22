/* Queue implementation using stack*/
/*
Approaches
1. Approach 1:
 Using 2 Stacks and deQueue opeartion costly.
2. Approach 2:
  using function call stack
*/
#include "bits/stdc++.h"
using namespace std;
/*First approach*/
class que{
  public:
  stack<int> s1;
  stack<int> s2;

  void push(int x){
   s1.push(x);
  }
  int pop(){
    if(s1.empty() && s2.empty()){
        cout<<"queue is empty ! underflow"<<endl;
        return -1;
    }
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    int topval = s2.top();
    s2.pop();
    return topval;
  }

  int peek(){}

  bool empty(){
    if(s1.empty() && s2.empty()){
        return true;
    }
    return false;
  }

};

/*Second approach*/
class queu{
    public:
    stack<int> s1;
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
    }
};

int32_t main(){
    queu q;
    q.push(1);
    q.push(2); //push = O(1)
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<q.pop()<<endl;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl; // pop = O(n)
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;


return 0;
}