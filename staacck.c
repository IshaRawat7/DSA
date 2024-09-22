#include<stdio.h>
void bubble_sort(int arr[],int n);
void display(int arr[],int size);
int main() {
    int arr[] = {1,4,5,6,7,9,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
     
     bubble_sort(arr,size);
     display(arr,size);

    return 0;
}
void bubble_sort(int arr[],int n){
    int i,j,temp;
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void display(int arr[],int size){
    for(int i =0;i<size;i++){
        printf("%d",arr[i]);

    }
    printf("\n");
}







void insertion_sort(int arr[],int n){
    int i,j,key;
    for(int i = 1;i<n;i++){
        key = arr[i];
        j= i-1;
        while(j>=0 && arr[j]>key){
         arr[j+1] = arr[j];
         j--;
        }
        arr[j+1] = key;
    }
}



void selection_sort(int arr[],int n){
    int min,i,j,temp;
    for(int i =0;i<n-1;i++){
        min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] <arr[min])
            min = j;

        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}








void partition(int arr[],int l,int r){
    int pivort = arr[r];
    int i = l-1;
    for(int j =l;j<=r-1;j++){
        if(arr[j]<=pivort){
            i++;
        
        swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return(i+1);
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(int arr[],int l,int r){
    if(l<r){
        int pi = partition(arr,l,r);
        quick_sort(arr,l,pi-1);
        quick_sort(arr,pi+1,r);
    }
}



void merge_sort(int arr[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}


void merge(int arr[],int l,int mid,int r){
    int i,j,k;
    int n1 = mid - l +1;
    int n2 = r - mid;

    int a1[n1];
    int ar[n2];
    for(i =0;i<n1;i++){
        a1[i] = arr[l+i];
    }
    for(j =0;j<n2;j++){
        a2[j] = arr[m+1+j];
    }


i =0;
j= 0;
k =l;
    while(i<n1 && j<n2){
        if(a1[i]<=a2[j]){
            arr[k] = a1[i];
            i++;
            k++;
        }
        else{
            arr[k] = a2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = a1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = a2[j];
        j++;
        k++;
    }
}