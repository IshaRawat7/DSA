/*
Problem: Subarray of size K with Palindromic Concatenation
For a given array and an integer K, Check of any subarray of size K exists in the array such that concatenation of elements form a palindrome.

Approach 1: Generate all subarrays pf sixe K , Complexity: O(n^3);

Approach 2: Sliding Window Technique:
1. store Concatenation of initial K elements.
2.Iterate over the array ans start deleting elements from the start and adding elements from the end.
3. At each step,check if concatenation is a palindrome: O(n^2);

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isPalindrome(int num){
    int temp = num;
    int n=0;
    while(temp >0){
        n = n*10 + temp%10;
        temp = temp/10;
    }

    if(n == num){
        return true;
    }
   
        return false;
   
}

int  PalinSubarr(vector<int>arr , int k){
int num =0;
for(int i =0;i<k;i++){
    num = num*10 + arr[i];
}

if(isPalindrome(num)){
    return 0;
}

for(int j = k;j<arr.size();j++){
  num = (num % (int)pow(10,k-1))*10 + arr[j];

  if(isPalindrome(num)){
    return j-k+1;
  }
}

return -1;

}

int main(){
vector<int> arr={2,3,5,1,1,5};
int k = 4;
int ans = PalinSubarr(arr,k);

if(ans == -1){
    cout<<"Palindromic subarray does not exists";
}
else{
    for(int i = ans ; i<ans+k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
return 0;
}






















