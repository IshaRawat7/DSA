/* Queue implementation using Linked list.*/
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data= val;
        next = NULL;
    }
};

class queue{
public:
node* front;
node* rear;
queue(){
    front = NULL;
    rear = NULL;
}

void enqueue(int x){
    node* n = new node(x);
    if(front == NULL){
        rear=n;
        front=n;
        return;
    }
    rear->next = n;
    rear=n;
}

void dequeue(){
    if(front== NULL){
        cout<<"Queue is Empty ! Underflow"<<endl;
        return;
    }
    node* todel = front;
    front= front->next;

    delete todel;
} 

int peek(){
    if(front == NULL){
        cout<<"Queue is empty! underflow"<<endl;
        return -1;
    }
     return front->data;
}

bool empty(){
    if(front== NULL){
        return true;
    }
    return false;
}
};
int main(){


queue q;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);

cout<<q.peek()<<endl;
q.dequeue();
cout<<q.peek()<<endl;
return 0;
}