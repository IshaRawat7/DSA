/*using DNF sorting technique
DNF = dutch national flag
DNF: 0,1,2 sort


we use 3 pointers low,mid and high.
low and mid pointers will be starting from start point of the array and high pointer will be starting from end point of the array.
we devive the array into 4 parts :-
1.start to low - for zeroes ;denoted by red
2.low to mid - for ones ;denoted by white
3. mid to high - for unknown
4. high to last - for twos ;denoted by blue



3 things need to be done-:
firstly: if 0 swap arr[low] and arr[mid],low++,mid++;
secondly : if 1 mid++;
thirdly : if 2 swap arr[mid] and arr[high],high--;


// time complexity:-
TC = O(n);
*/

#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void dnfsort(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr,low,mid);
            mid++;
            low++;
        }
       else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr,mid,high);
            high--;
        }
    }
}
int main(){
    int arr[] = {1,1,2,0,0,1,2,2,1,0};
    dnfsort(arr,9);
    for(int i =0;i<9;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}