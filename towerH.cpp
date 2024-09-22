#include<iostream>
using namespace std;
void towerH(int n,char src,char dest,char help){
if(n==0){
    return;
}
    towerH(n-1,src,help,dest)
    cout<<"MOVE FROM"<src<<"to"<<dest<<endl;
    towerH(n-1,helper,dest,src);
}

int main(){
towerH(3,'A','C','B');

return 0;
}