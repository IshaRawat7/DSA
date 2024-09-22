/* Three sum problem
given an array and a value, find if there exits three numbers whose sum is equal to the given value.
*/ 

#include "bits/stdc++.h"
using namespace std;

int32_t main(){
  /*  vector<int> a = {2,4,6,89,9,5,1};
    int n = a.size(); //Time complexity=O(n^3);
    int target = 12,found = false;
    for(int i= 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k= j+1;k<n;k++){
                if((a[i] + a[j] + a[k]) == target){
                    found = true;
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                }
            }
        }
    }*/


/*2 Pointer Technique
1.Sort the array
2.Tarverse the array and fix the first element of the triplet. The problem reduces to dinf if there exist two elements having sum equal to x-array[i];
*/

vector<int> a ={2,4,6,89,9,5,1};
int n= a.size();
bool found = false;
int target = 12;
sort(a.begin(),a.end());

for(int i =0;i<n;i++){
    int l =i+1, h= n-1;
    while(l<h){
        int current = a[i] + a[l] + a[h];
        if(current == target){
            found = true;
            break;
        }
        if(current < target){
            l++;
        }
        if(current >target){
            h--;
        }
    }
} 
if(found){
    cout<<"True"<<endl;
}
else{
    cout<<"false"<<endl;
}
return 0;
}