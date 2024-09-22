/*
permutation of numbers*/
/*
question1. an array nums of distinct integers return all the possile permutations . you can return the answer in any order*/
// time complexity of this code is O(n!);
#include<iostream>
#include"bits/stdc++.h"
using namespace std;
int32_t main(){
    int n; 
    cin>>n;
  vector<int> a(n);
  for(auto &i :a)
  cin>>i;
  sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }
    while(next_permutation(a.begin(),a.end()));


  for(auto v : ans){
    for(auto i : v)
    cout<<<i<<"";
    cout<<"\n";
  }
  
 



return 0;
}

s