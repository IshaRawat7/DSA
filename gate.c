#include<stdio.h>


int f1(int n){
    static int i =0;
    if(n>0){
        ++i;
        f1(n-1);
    }
    return (i);
}


int f2(int n){
    static int i= 0;
    if(n>0){
        i = i+ f1(n);
        f2(n-1);
    }
    return (i);
}
int main() {
    
    int c = f2(5);
    printf("%d\n", c);

    return 0;
}