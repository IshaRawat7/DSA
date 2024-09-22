#include<stdio.h>
#include<string.h>
 
 struct employee{
    int code;
    char name[20];
 }
 int main(){
    struct employee e1;
    struct employee *ptr;
    ptr  = &e1;
    ptr->code = 101;
    strcpy(ptr->name,"ISHA");
    printf("INFO of employee oine is\n":);
    printf("Code  of the employee is %d\n:",ptr->code);
    printrf("Name of the employee is %d\n:",ptr->name);
    return 0;
 }