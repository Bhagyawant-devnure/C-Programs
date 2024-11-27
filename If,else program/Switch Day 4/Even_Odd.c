// Write a C program to check the number is even or odd b using switch case.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
switch (n%2)
{
case 0: puts("even"); break;
    

default: puts("odd");
    
}
}