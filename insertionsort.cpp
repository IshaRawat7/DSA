#include<iostream>
using namespace std;
int main(){
int n, arr[n] ;
cin>>n;
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
for(int i = 0;i<n-1;i++){
    for(int j =1 ;j<n;j++ ){
        if(arr[j] <arr[i]){
            int temp;
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
}
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}