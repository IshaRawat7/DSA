/*Recurrence relation
A Recurrence Relation is an equation that recursively defines a sequence.
fibonacci series:
F(n)= F(n-1) + F(n-2)

Master Thorem:
Gives the complexity for a recurrence relation:
T(n) = aT(n/b) + f(n)

for the recurrence relation T(n)= aT(n/b) + 0(n^c) ,a>=1, b>1

There are following three cases:
1. If f(n) = 0(n^c) where c < (Log a base b) then T(n)= 0(n^(Log a base b ))
2. If f(n) = 0(n^c) where c = (Log a base b ) then T(n) = 0(n^c (Log n base b ))
3. If f(n) = 0(n^c) where c > (Log a base b) then T(n)= 0(f(n))
*/

/*Question*/
/*1. T(n) = 2T(n/2) + 0(n) 
a = 2 , b= 2 , c=1,
c = Log a base b
Time Complexity : 0(n Log n base 2)
*/

/*2. T(n)= 3T(n/2) + n^2 
a = 3, b = 2 , c = 2;
then c > Log 3 base 2
T(n) = 0(n^2);
*/

/*Recurrence Tree Method
1. T(n) = T(n-1) + n
T(n-1) = T(n-2) + n-1
T(n-2) = T(n-3) + n-2
T(n-3) = T(n-4) + n-3.
....
T(1) = 1 
Add all above terms the , we get:
T(n)  = n + (n-1) + (n-2) + (n-3) +......+1
T(n) = (n*(n+1)/2)
T(n) = 0(n^2);
*/
#include<iostream>
using namespace std;
int main(){

return 0;
}