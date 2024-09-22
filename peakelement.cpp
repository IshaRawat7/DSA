
/*FOr a given array,find the peak element in the array.Peak element is one which is greater than both,left and right neighbours of itself.
Ascending array: last element is speak
Descending array: last element is peak
for all same element all are peak element.
arr[]=[10,20,15,2,23,90,67]
strategy : use binary search , analyze indices from 0 to n-1
compute mid and for each mid check if arr[mid] is a peak element.
else if arr[mid-1] > arr[mid], check left for peak, else if arr[mid] < arr[mid-1], check right for peak.
*/
#include "bits/stdc++.h"
using namespace std;
int findPeakELement(int arr[], int low, int high, int n){
    int mid = low + (high-low)/2;
    
    if((mid == 0 || arr[mid -1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid])){
      return mid;
    }
    
    else if( mid > 0 && arr[mid-1] > arr[mid]){
        return findPeakELement(arr,low,mid-1,n);
    }
    else{
        return findPeakELement(arr, mid+1, high,n);
   }

}

int main(){
int n = 6;
int arr[]= {0,6,8,5,7,9};
cout<<"Peak Element index: "<< findPeakELement(arr,0,n-1,n);
return 0;
}