/*Problem:
For a given array and an integer K, check if any subarray of size K exists in the array such that elements on the subarray form a number divisible by 3.
Approach 1: compute the numbers formed by all possible subarrays of size k. Ckeck for thier divisiblity with 3.
Approach2: Sliding Window Complexity : O(n);
A number is divisible by 3 if and only if the sum of its digits is divisible by 3
1. SUm of inntial K elements from the array.
2. use siliding window technique and one by one, start subtracting elements from the end and adding from the end.
3. At each step , check if sum divisible by 3 or not . If it is Print the elements.
arr[]= {8,23,45,12,56,4};

*/

#include<iostream>
#include<vector>
using namespace std;

void SumDiv3(vector<int> arr, int k){
pair<int, int> ans;
int sum =0;

for(int i=0;i<k;i++){
    sum += arr[i];
}

bool found = false;
if(sum%3 == 0){
    ans = make_pair(0,k-1);
    found = true;
}
for(int j = k;j<arr.size();j++){
    if(found){
        break;
    }


    sum = sum + arr[j]- arr[j-k];
    

    if(sum%3 == 0){
        ans = make_pair(j-k+1,j);
        found = true;
    }


}

if(!found){
    ans = make_pair(-1,0);
}

if(ans.first == -1){
    cout<<"No Such Subarray exists! "<<endl;
}

else{
    for(int i =ans.first;i<=ans.second;i++){
       cout<<arr[i] <<" "; 
    }
    cout<<endl;
}
}


int main(){
vector<int> arr = {8,23,45,12,54,4};
int k =3;

 SumDiv3(arr,k);
return 0;
}














