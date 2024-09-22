#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*top = NULL;
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
  push(60);
  push(70);
  push(80);
  push(90);
  push(100);
  push(110);
  display();
    printf("popped elements is: %d\n", pop());
    display();

    return 0;
}
void push(int value){
    struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("OVERFLOW\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}
int pop(){
    if(top == NULL){
        printf("stack underflow\n");
        return -1 ;
    }
    else{
        struct Node*temp = top;
        int poppedValue = temp->data;
        top = top->next;
        free(temp);
        return poppedValue;
    }
}
int isEmpty(){
    return top == NULL;
}
void display(){
    struct Node*current = top;
    if(isEmpty()){
        printf("stack underflow\n");
    }
    else{
        printf("stack elements are:\n");
        while(current != NULL){
            printf("%d\n",current->data);
            current = current->next;
        }
        printf("\n");
    }
}