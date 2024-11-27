//write c program  to print given pattern   1 2 3 4
                                        /*  1 2 3 4
                                            1 2 3 4*/                                       
#include<stdio.h>
#include<conio.h>
int main(){
    int nr,nc,r,c;
    printf("enter no of rows and colums");
    scanf("%d %d",&nr,&nc);
    for (r= 1; r<=nr; r++)
    {
        for ( c = 1; c <=nc; c++)
        {
           printf("%3d",c) ;
        }
        printf("\n");
        
    }
    getch();
}