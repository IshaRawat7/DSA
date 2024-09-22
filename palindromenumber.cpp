#include<iostream>
using namespace std;
int main(){
    int i=0,j=3;
    int arr[] = {1,0,0,1};
    int mid = (i+j)/2;
    int flag =0;
    while(i<=mid && j<=3){
        if(arr[i] == arr[j]){
            i++;
            j++;
        }
          flag = 1;
    }
    if(flag == 1){
        cout<<"This is palindrome"<<endl;

    }
    else{
        cout<<"This is not palindrome"<<endl;
    }


return 0;
}