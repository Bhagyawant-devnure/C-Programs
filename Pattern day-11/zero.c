/*Write C program to print given pattern.

0
0  1
0  1  1
0  1  1  2
0  1  1  2  3
0  1  1  2  3  5*/




#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    
    for (int  i = 1; i <=n; i++)
    {
        int a=0,b=1,c=0;
        for (int j = 1; j <=i; j++)
        {
            printf("%d",c);
            a=b;
            b=c;
            c=a+b;

        }
        printf("\n");
    }
    
}
