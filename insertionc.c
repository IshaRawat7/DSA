#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =1 ;i<n;i++){
        int new = arr[i];
        int j = i-1;
        while(arr[j]>new && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = new;
    }


    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}