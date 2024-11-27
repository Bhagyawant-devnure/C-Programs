//write a c program to find maximum between two numbers using if-else.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter a or b value");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("a is big");
    }
    else if(b>a){
        printf("b is big");
    }
    else if(a==b){
        puts("both are equal");
    }
    getch();
}