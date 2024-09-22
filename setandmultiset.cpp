/*s and Multis cpp*/


/*s| ordered| unordered.
present in #include <s> header file.
*/


#include "bits/stdc++.h"
#include<unordered_set>
#include <set>
using namespace std;
int32_t main(){
    /*Set multiset.*/
/*multiset<int> s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(1); 
 /*Time complexity 
1. insertion: O(Log N);
2. Deletion :O(Log N);
3.Lower/Upper_Bound: O(LOg N);
*/
/*s.insert(2);

for(auto i : s){
    cout<<i<<" ";
}

cout<<endl;

cout<<s.size()<<endl;

s.erase(s.find(2));
for(auto i : s){
    cout<<i<<" ";
}
*/
/*Multi set
1.can contain duplicates.
Implemented using balanced BST.
Elements are in sorted order
Random access is not possible , i.e you cannot get i'th element in O(1)/)(Log N).
Present in #include <set> header file.*/

/*Unordered set
1.Unique elements are present.*/

unordered_set<int> s;
s.insert(1);
s.insert(2);
s.insert(3); /*Time complexity : Insertion : O(1) in avg case, O(N) in worst case
Deletion: O(1) in avg case, O(N) in worst case
Lower/Upper_Bound: NA*/
s.insert(5);
s.insert(4);
s.insert(7);
s.insert(6);

cout<<endl;
for(auto i : s){
    cout<<i<< " ";
}
return 0;
}