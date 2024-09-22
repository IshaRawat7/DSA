/*stack implementation using queue*/
/* 2 methods
1. Making push method costly 
2.Making pop method costly.
*/
#include<iostream>
#include<queue>
using namespace std;
/*Method 1*/
class Stack{
    private:
    int N;
    queue<int> q1;
    queue<int>q2;
    public:
    Stack(){
        N=0;
    }

    void push(int val){
        q2.push(val);
        N++;
     while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
     }
     queue<int> temp = q1;
     q1 = q2;
     q2 = temp;
    }

    void pop(){
        q1.pop();
        N--;
    }

    int top(){
        return q1.front();
    }

    int size(){
        return N;
    }
};

/*Second approach */
class Sta{
public:
int N;
queue<int> q1;
queue<int> q2;
Sta(){
    N =0;
}
void push(int x){
    q1.push(x);
    N++;
}

int top(){
   if(q1.empty()){
    cout<<"Underflow!"<<endl;
    return -1;
   }
    while(q1.size() != 1){
        q2.push(q1.front());
        q1.pop();
    }
    int ans = q1.front();
    q2.push(ans);

    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
  return ans;
}

int size(){
    return N;
}

void pop(){
    if(q1.empty()){
        cout<<"Queue is empty! Underflow"<<endl;
        return;
    }

    while(q1.size() != 1){
        q2.push(q1.front());
        q1.pop();
    }
    q1.pop();
    N--;
    queue<int> temp = q1;
    q1= q2;
    q2 =temp;
}

};


int main(){
Sta s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.pop();
cout<<s.size();
return 0;
}