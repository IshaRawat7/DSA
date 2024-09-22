//merge sort
/*
devide and conquer
devide the array into 2 parts by mid
then we seperate the two parts first and second
and we call back the merge sort function





//time complexity of merge sort
1. reccurence
 T(n) = 2T(n/2) + n;  
 T(n) = 2T(n/2) + n;
 T(n/2)  =  2T(n/4)+n/2; * 2
 T(n/4) = 2T(n/8) + n/4; * 4
 T(n/8) = 2T(n/16)+n/8; *16



 ........
 T(1) = 1;   *2^logn


 so :-
 T(n)= n logn ;

 levels-:
 n/2^k = 1
 2^k = n
 k = log n;
*/



#include<iostream>
using namespace std;
void mergesort(int arr[],int l,int r);
void merge(int arr[],int l,int mid,int r);

int main(){

    // time cpmplexity of merge sort is n logn;
    //time complexity for insertion sort is n^2;
int arr[] = {2,5,9,3,7,8,9,4};
mergesort(arr,0,7);
for(int i = 0;i<8;i++){
    cout<<arr[i]<<" " ;
 }
 cout<<endl;
return 0;
}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid;
        mid= (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
void merge(int arr[],int l,int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];

    for(int i = 0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int j =0;j<n2;j++){
        b[j] = arr[mid+1+j];
    }


    int i = 0;
    int j = 0;
    int k = l;
    while(i<n1 && j<n2){
        if(a[i] <b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while(i<n1 ){
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = b[i];
        k++;
        j++;
    }

}
