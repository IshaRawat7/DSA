#include<stdio.h>
#include<string.h>
struct dateof{
    int year;
    int month;
    int date;
    int hour;
    int minute;
    int seconds;
}
void display(struct dateof d1,struct dayeof d2){
    printf("The date is %d/%d/%d  %d:%d:%d\n:",d2.year,d2.month,d2.date,d2.hour,d2.minute,d2.seconds);
    printf("The date of day 2 is %d/%d/%d  %d:%d:%d\n:",d2.year,d2.month,d2.date,d2.hour,d2.minute,d2.seconds);
}
int datecmp(struct d1,struct d2){
    if(d1.year>d2.year){
        return 1;
    }
     if(d1.year<d2.year){
        return -1;
    }
     if(d1.month>d2.month){
        return 1;
    }
     if(d1.month<d2.month){
        return -1;
    }
     if(d1.date>d2.date){
        return 1;
    }
     if(d1.date<d2.date){
        return -1;
    }
     if(d1.hour>d2.hour){
        return 1;
    }
     if(d1.hour<d2.hour){
        return -1;
    }
     if(d1.minute>d2.minute){
        return 1;
    }
     if(d1.minute<d2.minute){
        return -1;
    }
     if(d1.seconds>d2.seconds){
        return 1;
    }
     if(d1.seconds<d2.seconds){
        return -1;
    }
    return 0;
}
int main(){
    struct dateof d1 = {11,4,21,15,23,56};
    struct dateof d2 ={10,2,3,23,25,45};
    display(d1);
    display(d2);
    int a = datecmp(d1,d2);
    printyf("Date comparsion of the two dates is given by%d\n:",a);
    return 0;
}