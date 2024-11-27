/*write a c program that takes an integer as input and check if it is a positive or negative,zero display 
the appropriate massage as output using the ternary operator*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    a>0 &&  printf("%d is a positive",a); 
    a<0 && printf("%d is a negative",a);
   
    (a==0) && printf("%d is a zero",a);

}