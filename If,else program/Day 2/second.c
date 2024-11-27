//write a c program to find maximum between three number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=100, b=500, c=300;
    if (a>b && a>c)
    {
        printf("a is big");
    }
    else if(b>a && b>c)
    printf(" b is big");
    else if(c>a && c>b)
    printf("c is big");
    else if(a==b && b==c)
    printf("both are equal");
    
}