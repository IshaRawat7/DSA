/*Max sum subarray of size = k and sum < x
Problem: for a given array and integers K and X , find the maximum sum subarray of size k and having sum less than X.
Approach 1:
compute sum of all possible subarrays of size K complexity = O(n*k).
Approach 2 : Sliding Window.
calculate sum of first k element.
Initialize ans with this sum.
Iterate over the rest of the arr leep adding one element in sum and removing one from start. compare new sum, with ans in each iteration. Complexity: O(n).
arr[] = {7,5,4,6,8,9};
*/

#include<iostream>
using namespace std;

void kSum(int arr[],int n,int k , int x){
  int sum =0, ans =0;
  for(int i =0;i<k;i++){
    sum += arr[i];
  }

  if(sum < x){
    ans = sum;
  }
  for(int i =k;i<n;i++){
    sum = sum - arr[i-k] ;
    sum = sum + arr[i];

    if(sum < x){
         ans = max(ans,sum);
    }
  }

  cout<<ans<< "   is the max subarray sum (< x) "<<endl;
}
int main(){
int arr[] = {7,5,4,6,8,9};
int n = 6;
int k =3;
int x = 20;
kSum(arr,n,k,x);
return 0;
}


















