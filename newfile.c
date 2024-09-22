#include<stdio.h>
int factorial(int a){
    if(a ==1 || a== 0){
        return 1;
    }
    else{
        return a*factorial(a);
    }
}

int main() {
    int a;
   scanf("%d",&a);
   int c = factorial(a);
   printf("THe factorial of number is:%d\n",c);

    return 0;
}
/*
// average of three numbers
 #include<stdio.h>
int average(int a,int b,int c){
    return (a+b+c)/3;

}
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float e = average(a,b,c);
    printf("The average of three numbers is:%d",e);
    return 0;
}*/
/*#include<stdio.h>
int celtofare(int c){
    return (c*9/5)+32;
    }
    int main(){
        int c;
        scanf("%d",&c);
        float d = celtofare(c);
        printf("The converison is as:%f\n ",c);
    }*/

    // fibonacci series
    /*#include<stdio.h>
    int fibb(int n){
        if(n == 2){
            return 1;
        }
        else if(n ==1 ){
            return 0;
        }
        else{
           
            return fib(n-1) + fib(n-2);
        }
        int main(){
            int n;
            scanf("%d",&n);
            int c = fibb(n);
            printf("Fibbonaci series is:%d",c);
        }
    }
    */