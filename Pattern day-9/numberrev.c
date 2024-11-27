//write c program  to print given pattern   4 3 2 1
                                        /*  4 3 2 1
                                            4 3 2 1*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int nr,nc,r,c;
    printf("enter row and culums");
    scanf("%d %d",&nr,&nc);
    for ( r=1; r<=nr; r++)
    {
        for ( c=nc; c>=1; c--)
        {
            printf("%3d",c);
        }
        printf("\n");
        
    }
    getch();
}