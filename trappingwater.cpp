/*Trapping RainWater
given non-negative integers representing and elevation map where the width of each bar is 1, conpute how much water it can trap after raining.*/
#include "bits/stdc++.h"
#include<stack>
using namespace std;

int rain_water(vector<int> a){
stack<int> st;
int n=a.size(),i=0,ans =0;
for(i;i<n;i++){
    while(!st.empty() && a[st.top()] <a[i]){
   int cur =st.top();
   st.pop();
   if(st.empty()){
    break;
   }
   else{
    int diff= i-st.top()-1;
    ans += (min(a[st.top()],a[i]) - a[cur])* diff;
   }
    }
    st.push(i);
}
return ans;
}
int main(){
 vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
 cout<<rain_water(a);
return 0;
}