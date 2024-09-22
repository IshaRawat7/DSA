/*
arr[0]>=arr[1]<=arr[2]>=arr[3]<=arr[4]>=...........
in this arr of 1 should be smaller than arrof 1 and arrof 2 and so on.


arr[0]                     arr[2]                   arrr[4]





           arr[1]                      arr[3]                           arr[5]






// time complexity : O(n/2) = O(n);
 */



#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void wavesort(int arr[],int n){
    for(int i =1;i<n;i = i+2){
        if(arr[i] > arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i] > arr[i+1]&& i<=n-2){
            swap(arr,i,i+1);
        }
    }
}
int main(){
int arr[] = {1,3,4,7,5,6,2};
wavesort(arr,7);
for(int i =0;i<7;i++){
    cout<<arr[i]<<" ";
}
return 0;
}