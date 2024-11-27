//Write a C program to find the maximum between two number using switch statement
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter a b",a,b);
    scanf("%d %d",&a,&b);
    switch (a>=b)
    {
    case 1:puts("A is big");break;
    
    default:puts("B is big");
    }
}