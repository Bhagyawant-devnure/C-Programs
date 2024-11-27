/*write a c program to take the number of second and convert into (hour,minute,second)*/


#include<stdio.h>
int main(){
    
    int hour=0;
    int minute=0;
    int sec=0;

    printf("enter a second");
    scanf("%d",&sec);
    hour=sec/3600;
    minute=(sec-(3600*hour))/60;
    sec=(sec-(3600*hour))-(minute*60);

printf("total  %d hour %d minute %d sec ",hour,minute,sec);
}
    