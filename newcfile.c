#include<stdio.h>
#include<conio.h>
#define MAX 10
int queue[MAX];
int rear = -1 ,front = -1;
void insert(void);
void display(void);
int main() {
    queue[0] = 10;
    queue[1] = 3;
    queue[2] = 4;
    queue[3] = 9;
    queue[4] = 8;
    queue[5] = 7;
    queue[6] = 6;
    printf("The queue  is:");
    for(int i =0;i<7;i++){
        printf("%d",queue[i]);
    }
    insert();
    display();
    return 0;
}
void insert(){
    int n;
    printf("The number is:\n");
    scanf("%d",&n);
    if(rear == MAX -1){
        printf("Overflow");
    }
    else if(front == -1 && rear == -1){
        front = 0;
        rear =0;
    }
    else{
        rear++;

    }
    queue[rear] = n;
}
void display(){
    int i;
    printf("\n");
    if(front == -1 || front > rear){
        printf("\nqueue is empty");
    }
    else{
        for(int i =0;i<= rear;i++)
        printf("\t %d ",queue[i]);
    }
}