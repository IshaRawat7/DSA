//find fibonacci number using recurison
/*#include<iostream>
using namespace std;
int fib(int n){
 if(n == 0 ||n ==1){
    return n;
 }
   
   return fib(n-1)+fib(n-2);
    
}
int main(){
int n;
cin>>n;
cout<<fib(n)<<endl;

return 0;
}*/




// array sorted or not using recursion 
/*#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n == 1){
        return true;
    }
    bool restarray = sorted(arr+1,n-1);
    return(arr[0]<arr[1] && restarray);
    }
int main(){
int arr[]={1,3,2,4,6,5};
cout<<sorted(arr,6)<<endl;

return 0;
}*/

