/*(Using FOR LOOP) write a c program to check whether a given integer is a perfect number,
a number is considered perfect if it is equal to the sum of all its divisors excluding itself.
for example 6 is a perfect no because the divisors of 6 are 1,2,3, and their sum is 6 */
#include<stdio.h>
#include<conio.h>
void main(){
int no,sum=0,i;
printf("enter your no");
scanf("%d",&no);
for ( i =1; i<=no/2; i++)
{
    if (no%i==0)sum=sum+i;
    }
    puts(no==sum?"prime no":"not prime no");
    getch();
}




