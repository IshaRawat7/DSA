
#include<stdio.h>
int  pop();
void push(int value);
void display();
int peek();
int isEmpty();
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;


int main() {
 for(int i = 1;i<20;i = 2*i){
    push(i);
 }
    display();
    printf("poped element:%d\n",pop());
    
printf("number after peek operation is: ",peek());
display();
    return 0;
}
void push(int value){
    if(top == MAX_SIZE - 1){
        printf("overflow\n");
    }
    else{
        stack[++top] = value;

    }
}
int pop(){
    if(top == -1){
         printf("UNDERFLOW\n");
         return -1;
    }
    else{
        return stack[top--];

    }
}
int isEmpty(){
    return top == -1;
}
void display(){
    if(isEmpty()){
        printf("stack is empty\n");
    }
    else{
        printf("stack elements: ");
        for(int i =0;i<= top;i++){
            printf("%d\n",stack[i]);
        }
        printf("\n");
    }
}
int peek(){
    if(top == -1){
        printf("UNDERDFLOW");
    }
    else{
        return stack[top];
    }
}