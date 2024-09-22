#include<stdio.h>
#include<conio.h>
#define MAX 10
int queue[MAX];
int front = -1 ,rear = -1;
void pop(void);
void display(void);

int main() {
    int val;
    queue[0] = 1;
    queue[1] = 5;
    queue[2] = 2;
    queue[3] = 3;
    queue[4] = 4;
    for(int i = 0;i<5;i++){
        printf("%d",queue[i]);
    }
    front = 0;
    rear = 4;
    val = pop();
    if(val != -1){
        printf("\n THe NUmber deleted is:%d",val);
    }
    

    return 0;
}
void pop(){
    int val;
    if(front == -1 || front > rear){
        printf("\nUNDERFOLW");
        return -1;
    }
    else{
        val = queue[front];
        front++;
        if(front > rear)
        front = -1,rear = -1;
        return val;
    }
}
/*for peek*/
/*val = peek();
if(val != -1){
    printf("\n The first value in the queue is:%d",val);



    void pop(){
        if(front == -1 || front >rear){
        printf("\n QUEUE IS EMPTY");
        return -1;
        }
        else{
            return queue[front];
        }
    }
}*/