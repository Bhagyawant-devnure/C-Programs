// write a c program to check whether a number is negative,positive or zero
#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("enter your number");
    scanf("%d",&no);
    if(no>0){
        printf("positive");
    }
    else if(no<0){
        printf("negative");
    }
    else if(no==0){
        printf("zero");
    }
}