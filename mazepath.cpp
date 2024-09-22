#include<iostream> // move in right and downward direction only
using namespace std;
int mazepath(int n,int start,int end){
 if(start == n-1 && end == n-1){
    return 1;
 }
 if(start>= n || end >=n){
    return 0;
 }


 return( mazepath(n,start+1,end) + mazepath(n,start,end+1));

}
int main(){
cout<<mazepath(4,0,0)<<endl;

return 0;
}