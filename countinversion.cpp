/*//count inversion:
two elements a[i]  and a[j] from an inversion if a[i] > a[j] and i<j
arr = 3,5,6,9,1,2,7,8
inversions: 10
explanation:- (3,1),(3,2),(5,1),(5,2),(6,1),(6,2),(9,1),(9,2),(9,7),(9,8)


/// Time complexity = O(n);
*/


#include<iostream>
using namespace std;
void countinversion(int arr[],int n){
    int inversion =0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] > arr[j]){
                inversion++;
            }
        }
    }
    cout<<inversion;

}
int main(){
    int arr[] = {6,3,9,5,2,8,7,1};
    countinversion(arr,8);

return 0;
}