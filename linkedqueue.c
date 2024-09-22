#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*front = NULL;
struct Node*rear = NULL;
void push(int value);
int pop();
int peek();
void display();
int isEmpty();
int main() {
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);
  
  display();
    printf("popped element is: %d\n", pop());
    display();
    printf("peek  element is: %d\n", peek());

    return 0;
}
void push(int value){
    struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("OVERFLOW\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
   if(front == NULL){
    front = rear = newNode;
   }
   else{
    rear->next = newNode;
    rear = newNode;
   }
}
int pop(){
    if(front == NULL){
        printf("queue underflow\n");
        return -1 ;
    }
    else{
        struct Node*temp = front;
        int poppedValue = temp->data;
        front = front->next;
        free(temp);
        if(front == NULL){
            rear == NULL;
        }
        return poppedValue;
    }
}
int isEmpty(){
    return front == NULL;
}
void display(){
    struct Node*current = front;
    if(isEmpty()){
        printf("queue underflow\n");
    }
    else{
        printf("queue elements are:\n");
        while(current != NULL){
            printf("%d\n",current->data);
            current = current->next;
        }
        printf("\n");
    }
}
int peek(){
    if(front == NULL || front >rear){
        printf("queue UNDERFLOW");
    }
    else{
        struct Node*temp = front;
        int poppedValue = temp->data;
        return poppedValue;
    }
}