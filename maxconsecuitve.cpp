/* Max Consecutive ones*/
/* Given an array A of 0's and 1's , we may change up to k values from 0 to 1
Return the length of the longest (contiguous) subarray that contains only 1's*/

/*Approach 
Find the longest subarray with at most k zeros.
for each A[j], try to find the longest subarray.
If A[i] ~ A[j] has zeros <=k, we continue to increment j.
If A[i] ~ A[j] has zeros >k, we increment i(as well as j).*/

#include "bits/stdc++.h"
using namespace std;


int32_t main(){
vector<int> a = {1,1,1,0,0,1};
int n = a.size();
int k =2;

int i=0,ans=0,count=0;
for(int j=0;j<n;j++){
    if(a[j] == 0){
        count++;
    }
    while(count >k){
      if(a[i]== 0){
        count--;
      }
      i++;
    }
    //count <=k
    ans = max(ans,j-i+1);
}
cout<<ans<<endl;
return 0;
}