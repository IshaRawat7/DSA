#include<stdio.h>
#define MAX_SIZE 103
void push(int value);
int peek();
int pop();
void display();
int queue[MAX_SIZE];
int front = -1;
int rear = -1;




int main() {
 for(int i = 1;i<= 100; i = i/10){
    push(i);
 }
    display();
    printf("poped elements are: %d\n",pop());
    display();

    return 0;
}
void push(int value){
if(rear == MAX_SIZE -1){
    printf("queue overflow\n");

}
else{
    if(front == -1){
        front = 0;
    }
    queue[++rear] = value;
}
}
int pop(){
    if(front == -1 || front > rear){
        printf("queue underflow\n");
        return -1;
    }
    else{
        return queue[front++];
    }
}
int isEmpty(){
    return front == -1 || front > rear;
}
void display(){
    if(isEmpty()){
        printf("queue is empty.\n");
    }
    else{
        printf("queue elements: ");
        for(int i = front ;i<= rear;i++){
            printf("%d",queue[i]);
        }
        printf("\n");
    }
}
int peek(){
    if(front == -1 || front>rear){
        printf("UNDERFLOW\n");
    }
    else{
        return queue[top];
    }
}