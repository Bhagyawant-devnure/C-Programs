/*Write C program to print given pattern.

5  5  5  5  5
4  4  4  4  4
3  3  3  3  3  
2  2  2  2  2*/




#include<stdio.h>

int main()
{
    int nr,nc,c,r;
    printf("enter row and culum");
    scanf("%d %d",&nr,&nc);
    for (r= nr; r>=1;r--)
    {
        for ( c =1; c <nc;c++)
        {
           printf("%3d",r) ;
        }
        printf("\n");
        
    }
    
}