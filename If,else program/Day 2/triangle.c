// Write a C program to input all side of a triangle and check whether triangleis valid or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter Value",a,b,c);
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("Triangle is Valid");
    }
else{
    printf("it is not valid");
}
    
}