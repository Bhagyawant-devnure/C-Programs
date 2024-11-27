/*write c program to check and print the maximum number among three numbers using ternary operator*/
#include<stdio.h>
int main()
{
    int a=10,b=200,c=134;
a>b && a>c && printf("%d is greater",a);
b>a && b>c && printf("%d is greater ",b);
c>a && c>b && printf("%d is greater",c);
return 0;

}