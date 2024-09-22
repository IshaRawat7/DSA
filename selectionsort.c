#include<stdio.h>
void insert();
void display();
int arr[n];
int main() {
    insert();
    display();
    return 0;
}
void  insert(){
    int n;
    scanf("%d",&n);
    for(int i =0;i<n-1;i++){
        scanf("%d",&arr[n]);
    }
    for(int i =0;i<n-1;i++){
        int j = i+1;
        while(j<n){
            if(arr[j] < arr[i]){
            int temp;
            arr[j] = arr[i];
            arr[i] = temp;
            }
        }
    }
}


void display(){
for(int i =0;i<n;i++){
    printf("%d",&n);
}
}