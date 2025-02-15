/*Place elements to maximise minimum distance
Given is an array with n elements that represents n positions along a straught line. Find K elements such that the minimum distance between any 2 elements is the maximum possible.

Approach
1. Find all possible subsets of size k and compare the minimum distance between all of them.
2. sort the array for binary search technique.
2.2 pick middle element as resullt and check for its feasibility.
2.3 If feasible, search the right half of the array with larger minimum distance.
2.4 Else search the left half of the array.
*/

#include<iostream>
#include<algorithm>
using namespace std;

bool isFeasible(int mid, int arr[], int n , int k){
    int pos = arr[0], elements = 1;

    for(int i =1;i<n; i++){
        if(arr[i]- pos >= mid){
            pos = arr[i];
            elements++;
            if(elements == k){
                return true;
            }
        }
    }
    return false;
}

int largestMinDis(int arr[], int n , int k){
    sort(arr, arr+n);
    int res= -1;
    int left = arr[0], right = arr[n-1];

    while(left < right){
        int mid = (left+right)/2;
        if(isFeasible(mid, arr, n , k)){
            res = max(res,mid);
            left = mid+1;
        } else{
            right = mid;
        }
    }
    return res;
}
int main(){
    int n = 5;
    int k = 3;
int arr[] = {1,2,8,4,9};

cout<<"Largest min distance is: "<< largestMinDis(arr,n,k)<<endl;

return 0;
}

