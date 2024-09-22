//a chess board of n*n size and we have to place queen in such manner that they dont attack themselves

/*let n = 4
0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0


while checking we need to check for column and left and right diagonal

*/

#include<iostream>
using namespace std;
bool issafe(int**arr,int x,int y ,int n);
bool nqueen(int**arr,int x,int n);

int main(){
    int n;
    cin>>n;
     

     int**arr = new int*[n];
     for(int i = 0;i<n;i++){
        arr[i] = new int[n];
        for(int j = 0;j<n;j++){
            arr[i][j] = 0;
        }     }
  

  if(nqueen(arr,0,n)){
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
  }

return 0;
}
bool isSafe(int**arr,int x,int y ,int n){
   for(int row = 0;row<x;row++){
    if(arr[row][y] == 1){
        return false;
    }
   }
   // for left diagonal
  int row  = x;
  int col = y;
  while(row>=0 && col>=0){
    if(arr[row][col]==1){
        return false;
    }
    row--;
    col--;
  }

  // for right diagonal 
   row  = x;
   col = y;
  while(row>=0 && col<n){
    if(arr[row][col]==1){
        return false;
    }
    row--;
    col++;
  }
  return true;
 

 

}
void nqueen(int**arr,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col = 0;col<n;i++){
        if(isSafe(arr,x,col,n)){
            arr[x][col] = 1;



            if(nqueen(arr,x+1,n)){
                return true;
            }
        arr[x][col] = 0; // backtracking
        }
        

    }
    return false;

}