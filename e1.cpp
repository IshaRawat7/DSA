#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];

};
int main(){
    int a = 20;
    struct employee e1;
        e1.code = 100;
        e1.salary = 200;
        strcpy(e1.name ,"isha");


   printf("%s",e1.name);
   

   printf("%d",e1.code);
   
   

   printf("%f",e1.salary);
   

    
   
return 0;
}