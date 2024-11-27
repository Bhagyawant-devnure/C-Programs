// write c program to print given pattern
/*  *  *  *  * 
*  *  *  *  * 
*  *  *  *  * 
*  *  *  *  * 
*  *  *  *  * */



#include<stdio.h>
#include<conio.h>
void main()
{
    int c,r,nc,nr;
    printf("enter no of rows and colums ");
    scanf("%d %d",&nr,&nc);
    for(r=1; r<=nr;r++){
        for ( c = 1; c <=nc; c++)
        {
            printf("*");
        }{
            printf("\n");
        }
        getch();
        
    }

}