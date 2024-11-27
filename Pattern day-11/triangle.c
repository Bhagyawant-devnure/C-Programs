/*Write C program to print given pattern.

*
*  *
*  *  *
*  *  *  *
*  *  *  *  *

*/




#include<stdio.h>
#include<conio.h>
int main(){
    int r,c,n,i;
    printf("enter n value");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( r = 1; r<=i; r++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
}
