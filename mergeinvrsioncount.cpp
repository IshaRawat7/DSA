#include<iostream>
#include"bits/stdc++.h"
using namespace std;
long long merge(int arr[],l,mid,r){
    long long inversion = 0;
    int n1 = mid-l-1;
    int n2 = r- mid;
    int a[n1];
    int b[n2];
    for(int i =0;i<n1;i++){
        a[i] = a[l+i];
    }
    for(int i =0;i<n2;i++){
        b[i] = b[mid+1+i];
    }
    int i =0,j=0;j=l;
    while(i<n1 && j<n2){
        if(arr[i] <= b[j]){
            arr[k] = arr[i];
            k++;
            i++;
        }
        else{
            arr[k] = arr[j];
            //a[i]>b[j]  so one inversion and i<j
            inversion = inversion + n1 -i;
            k++;
            j++;
        }
        while(i<n1){
            arr[k] = arr[i];
            k++;
            i++;
        }
        while(j<n2){
            arr[k] = arr[j];
            k++;
            j++;
        }
    }
    return inversion;
}
long long mergesortinversion(int arr[],int l,int r){
    long long inversion = 0;
    if(l<r){
        int mid = (l+r)/2;
        inversion += mergesortinversion(arr,l,mid);
        inversion += mergesortinversion(arr,mid+1,r);
        inversion += merge(arr,l,mid,r);

    }
    return inversion;
}
int32_t main(){
int n;
cin>>n;
int arr[n];
for(int i =0;i<n;i++){
    cin>>arr[i];
}
cout<<mergesortinversion(arr,0,n-1);
return 0;
}