/*Search element in sorted and rotated array
We are given an ascending sorted array that has been rotated from a pivot point (unknown to us) and an element X. Search for X in the array with complexity less than that of linear search.*/
/* Idea
Find the pivot point
Apply binary search in Left half.
Apply binary search in right half.
only element that will be greater than its next Element i.e. : arr[i] > arr[i+1], i<=n-1

Saerching in left and right half
Exapmple:
arr[]=[30,40,50,10,20]
pivot = 50 as its greater than its next element.
key = 10 BS (left half ) ={130,20,40} BS (right half) = {10,20}
found in right half;
*/
#include<iostream>
using namespace std;

int SearchRotated(int arr[],int key, int left, int right){
    if(left > right){
        return -1;
    }
    int mid = (left+right)/2;
    if(arr[mid] == key){
        return mid;
    }
    if(arr[left] <= arr[mid]){
        if(key >= arr[left] && key <= arr[mid]){
        return SearchRotated(arr,key,left , mid-1);
        }
    
    return SearchRotated(arr,key,mid+1, right);
    }
    if(key >= arr[mid] && key <= arr[right]){
        return SearchRotated(arr,key,mid+1,right);
    }
    return SearchRotated(arr,key,left,mid-1);
    
}

int main(){
int arr[]= {6,7,8,9,10,1,2,5};
int n = 8;
int key = 8;
int idx = SearchRotated(arr,key,0,n-1);

if(idx == -1){
    cout<<"Key Doesn't exists! "<<endl;
}
else{
    cout<<"Key exists with index "<<idx<<endl;
}
return 0;
}