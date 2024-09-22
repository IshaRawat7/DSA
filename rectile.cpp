/*
2*n board and tiles of size 2*1
count number of ways to tile the given board using these tiles 2*1
there are bascially two ways to do so
firstly horizontally align the tiles
secondly vertically align the tiles
*/
#include<iostream> // using vertically place so our problem decrease to n-1 and if horizontally our problem decreases to n-2
using namespace std;
int placetile(int n){ // total number of ways = vertically placed + horizontally placed
if(n== 1){
    return 1;

}
if(n==0){
    return 0;
}
return placetile(n-1) + placetile(n-2);
}
int main(){
cout<<placetile(4)<<endl;;
return 0;
}