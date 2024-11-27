#include<stdio.h>
int main(){
    int tdays=372;
    int year=0;
    int month=0;
    int week=0;
    int day=0;

    year=tdays/365;
    month=tdays%365/30;
    week=tdays%365%30/7;
    day=tdays%365%30%7;
printf("total age %d year %d month %d week % day",year,month,week,day);
}