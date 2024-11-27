//write c program  to print given pattern   1 1 1 1
                                        /*  2 2 2 2
                                            3 3 3 3*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int nr,nc,c,r;
    printf("enter row and culum");
    scanf("%d %d",&nr,&nc);
    for (r= 1; r<=nr;r++)
    {
        for ( c = 1; c <=nc;c++)
        {
           printf("%3d",r) ;
        }
        printf("\n");
        
    }
    return 0;
}
