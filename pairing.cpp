/*
number of wyas in which n freinds can reamin single or can be paired up
*/

#include<iostream>
using namespace std;
int paired(int n){
   if(n==0|| n==1||n==2){
    return n;
   }
  return  paired(n-1) + paired(n-2)*paired(n-1);

}
int main(){
    cout<<paired(6)<<endl;
return 0;
}