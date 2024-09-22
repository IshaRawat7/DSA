//count number of paths from start to end point 

#include<iostream>  // game start at 0 and end at 3  
using namespace std;
int countpath(int start,int end){
    if(start==end){
        return 1;
    }
    if(start>end){
        return 0;
    }

    int count = 0;
    for(int i =1;i<=6;i++){
    count += countpath(start+i,end); //i is die 
    }
    return count;
}
int main(){
cout<<countpath(0,2)<<endl;

return 0;
}