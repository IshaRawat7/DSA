/*
Queue data structure
stores a list of itrems in which an item can be insreted at one end and removed from the other end only.
FIFO:- first in first out.
2 pointers 1. front 2. rear
items are added from rear and deletd from front
enqueue
dequeue
peek() //gives value of front.
empty()
*/

/*Array Implementation*/

#include<iostream>
using namespace std;
#define Max 100
class queue{
    public:
    int front; 
    int rear;
    int* arr;
    queue(){
      arr = new int[Max];
      front = rear = -1;

    }
void enqueue(int x){
    if(rear == Max-1){
    cout<<"Queue Full ! Overflow"<<endl;
    return;
    }
    rear++;
    arr[rear] = x;
    if(front == -1){
        front++;
    }
}


void dequeue(){
if(front == -1 || front>rear){
    cout<<"Queue is empty! Undeflow"<<endl;
    return;
}
front++;
}

int peek(){
    if(front == -1 || front >rear){
        cout<<"Queue empty! Underflow"<<endl;
    return -1;
    }
 return arr[front];

}

bool empty(){
    if(front == -1 || front>rear){
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
q.dequeue();

cout<<q.peek()<<endl;
q.dequeue();

cout<<q.peek()<<endl;
q.dequeue();


cout<<q.empty()<<endl;
return 0;
}