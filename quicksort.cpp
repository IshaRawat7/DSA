//quick sort 
/*
Bascially a quick sort alogrithm works in a way that we pivort a point in the array
accoring  to that we compare the elements 
if the pivort element is 










// time complexity also depends upon pivort element 
time complexity recurrence for best case
pivort element is in mid
T(n) = 2T(n/2)+n
T(n/2) = 2T(n/4)+n/2
T(n/4) = 2T(n/8) +n/4
........................
T(1) = 1

levels = n/2^k = 1;
2^k  = n
 k = logn
so time  complexity = n logn;



for worst case time complexity;
T(n) = T(n-1)+n
T(n-1) = T(n-2)+n-1
T(n-2) = T(n-3)+ n-2
...............................
T(1) = 1
T(n) = n+n-1+n-2+n-3..........................+1
T(n) = n(n+1)/2
time complexity is worst case is = O(n^2);

*/










#include<iostream>
using namespace std;
void quicksort(int arr[],int l,int r);
int partition(int arr[],int l,int r);
void swap(int arr[],int i,int j);
int main(){
int arr[] ={1,7,9,2,4,5,8,3};
quicksort(arr,0,7);
for(int i =0;i<8;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
void quicksort(int arr[],int l,int r){
    if(l<r){
        int pivort = partition(arr,l,r);
        quicksort(arr,l,pivort-1);
        quicksort(arr,pivort+1,r);
    }
}

int partition(int arr[],int l,int r){
    int pi = arr[r];
    int i = l-1;
    for(int j = l;j<r;j++){
        if(arr[j] < pi){
            i++;
            swap(arr,i,j);
        }

    }
    swap(arr,i+1,r);
    return i+1;

}
void swap(int arr[], int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}