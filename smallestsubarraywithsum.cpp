/*Smallest Subarray with sum > x
Peoblem: 
For a given array and an integer X,fidn the minimum subarray size for which sum > x.
A2: Sliding window
Use variables ans sum and start.
Iterate over array and start adding elements to sum.
If sum > x remove elements from the start. Time Complexity = O(n)
*/

#include<iostream>
using namespace std;
int kSmallSumsubarray(int arr[],int n,int x){
int sum =0,minL = n+1,start = 0,end=0;
while(end < n){
 while(sum <= x && end < n){
    sum += arr[end++];
 }

 while(sum >x && start <n){
 if(end - start < minL){
 minL = end - start;
 }
  sum -= arr[start++];

 }
}

return minL;
}

int main(){
int arr[] = {1,4,45,6,10,19};
int n = 6;
int x=51;
int minLength = kSmallSumsubarray(arr,n,x);

if(minLength == n+1){
    cout<<"No such Subarray exists in array"<<endl;
}
else{
cout<<"Min length of the subarray is   "<< minLength<<endl;
}
return 0;
}















