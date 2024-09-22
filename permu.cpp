/*
question1. an array nums of distinct integers return all the possile permutations . you can return the answer in any order*/
// time complexity of this code is O(n!);
#include<iostream>
#include"bits/stdc++.h"
using namespace std;
 vector<vector<int>> ans;
 void permute(vector<int> &a, int idx){
    if(idx == a.size()){
        ans.push_back(a);
    }
    for(int i = idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i] ,a[idx]);
    }
    return;

 }
int32_t main(){
    int n; 
    cin>>n;
  vector<int> a(n);
  for(auto &i :a)
  cin>>i;
  permute(a,0);
  for(auto v : ans){
    for(auto i : v)
    cout<<<i<<"";
    cout<<"\n";
  }
  
 



return 0;
}