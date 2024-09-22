#include<stdio.h>
void insertion_sort(int arr[],int n);

int main() {
    int n,arr[n];
    printf("The number of elements in the array are:");
    scanf("%d",&n);
    printf("The elements of the array are:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    void insertion_sort(arr,n);
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    getch();

    return 0;
}

void insertion_sort(int arr[],int n){
    int temp,i,j;
    for(i =1;i<n;i++){
        temp = arr[i];
        j = i-1;
        while((temp < arr[j]) && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

}