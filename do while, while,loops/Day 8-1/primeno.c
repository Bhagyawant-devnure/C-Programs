#include<stdio.h>
#include<conio.h>
int main()
{
    int no,i,c=0;
    printf("enter your number");
    scanf("%d",&no);
    if(no==1)puts("not a prime number/composite no");
    else{
    for ( i=1; i<=no; i++)
    {
        if(no%i==0) c++;
    }
    puts(c==2?"prime":"composite");
    
}}