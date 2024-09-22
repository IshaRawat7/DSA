#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\nNumber before swaping is %d",a);
    printf("\nNumber before swaping is %d",b);
    int temp;
    temp =a;
    a =b;
    b = temp;
    printf("\nNumber after swaping is %d",a);
    printf("\nNumber after swaping is %d",b);

return 0;
}