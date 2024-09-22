#include<stdio.h>
int factorial(int a){
    if(a ==1 || a== 0){
        return 1;
    }
    else{
        return a*factorial(a);
    }
}
}
int main() {
    int a;
   scanf("%d",&a);
   int c = factorial(a);
   printf("THe factorial of number is:%d\n",c);

    return 0;
}