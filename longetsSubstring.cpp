/*Longest Substring without repeating character*/
/*Approach
while Iterating mark the position of each character  At i'th character,check the previous occurnece and decide the start of the substring accordingly.
*/
#include "bits/stdc++.h"
using namespace std;
int32_t main(){
string s="abcabcbb";
vector<int> dict(256,-1);
int maxL=0,start=-1;
int n = s.size();


for(int i =0;i<n;i++){
    if(dict[s[i]] > start)
        start = dict[s[i]];
        dict[s[i]] =i;
        maxL= max(maxL,i-start);
}
cout<<maxL<<endl;
return 0;
}