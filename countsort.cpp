/*
1. Find the count of every distinct element in the array
2.calculate the position of each element in sorted array


Time complexity
1.First we create an array of approprIATE RANGE,TIME: O(max(Ai));
2.Fill the frequencies if each element Time O(n);
3. Iterate the frequency array,TIME: O(max(Ai));
final TIME COMPLEXITY : max(Ai,n);
Time C = O(max(Ai,n));

*/


#include<iostream>
void countsort(int arr[],int n){
    int k = arr[0];
    for(int i = 0;i<n;i++){
        k = max(k,arr[i]);
    }
    int count[10] ={ 0};
    for(int i =0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i = 1;i<=k;i++){
        count[i] = count[i-1];
    }
    int output[n];
    for(int i =n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i];

    }
    for(int i =0;i<n;i++){
        arr[i] = output[i];
    }

}
using namespace std;
int main(){
    int arr[]={1,3,2,3,4,1,6,4,3};
    countsort(arr,9);
    for(int i =0;i<9;i++){
        cout<<arr[i]<<" ";
    }




return 0;
}