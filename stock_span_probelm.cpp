/*Stock span problem
The span of the stocks's price today is defined as the maximum number of consecutive days (starting from today and going backwards) for which the price of the stocks was less than or equal to todays's price.
find the span of the stocks for all the days.
*/
#include "bits/stdc++.h"
#include<stack>
using namespace std;
vector<int> stockspan(vector<int> prices) {
    vector<int> ans;
    stack<pair<int, int>> s;

    for (auto price : prices) {
        int days = 1;
        while (!s.empty() && s.top().first <= price) {
            days += s.top().second;
            s.pop();
        }
        s.push({price, days});
        ans.push_back(days);
    }

    return ans;
}
int32_t main(){
/* Solution 1
vector<int> a = { 100,80,60,70,60,75,80};
int n = a.size();
for(int i=0;i<n;i++){
    int days =0;
    for(int j=i;j>=0;j--){
        if(a[i] >= a[j]){
            days++;
        }
        else{
            break;
        }
    }
    cout<<days<<" ";
}*/

/*Solution 2*/
vector<int> a={100,80,60,70,60,75,80};
vector<int> res = stockspan(a);
for(auto i : res){
    cout<<i<<" ";
}
    cout<<"\n";
return 0;
}