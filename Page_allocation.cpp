/* ALlocate Minimum pages*/
/*n- Number of pages in n different books [ascending order], m - number of students
All the books have to be divided among m students , consecutively . Allocate the pages in such a way that maximum pages allocated to a student is minimum.
*/
/*Example:
pages =[12,34,67,90]
students (m) = 2
Possible Allocations:
[12][34,67,90] -> 191
[12,34][67,90] -> 157
[13,67,42][90] -> 113 (\/)

stratergy:
Apply binary search for minimum and maximum possible values of 'max' pages.
check the feasibility of this chosen value.

Checking Feasibility:
Assign pages to each student in a sequential manner, while the current number of allocate pages don't exceed the value set by binary search.
If during allocation the number f students don't excedd the limit of 'm' , then the solution is feasible. ELse it isn't
*/



#include<iostream>
#include<climits>
using namespace std;



bool isPossible(int arr[], int n , int m , int mid){
    int studentsreq = 1;
    int sum = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] > mid){
            return false;
        }
        if((sum + arr[i]) > mid){
            studentsreq++;
            sum = arr[i];

            if(studentsreq > m){
                return false;
            }
        }
        else{
            sum += arr[i];
        }
    }
    return true;
}

int Page_allocation(int arr[], int n , int m){
 int sum = 0;
 if(n < m){
    return -1;
 } 
 for(int i= 0;i<n;i++){
    sum = sum + arr[i];
 }

 int start = 0, end = sum, ans = INT_MAX;
 while(start <= end){
   int mid = (start+end)/2;
   if(isPossible(arr,n,m,mid)){
     ans = min(ans,mid);
     end = mid-1;
   }
   else{
    start = mid+1;
   }
 
 }
   return ans;

}
int main(){
int n = 4, m =2;
int arr[] = {12,34,67,90};
cout<<"Min number of pages :   "<<Page_allocation(arr,n,m)<<endl;

return 0;
}