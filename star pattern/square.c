#include<stdio.h>
#include<conio.h>
int main()
{
    int r,c,nr;
    printf("enter row");
    scanf("%d",&nr);
    for ( r = 1; r <=nr; r++)
    {
        for ( c = 1; c<=nr; c++)
        {
        if (r==1 || c==1 || r==6|| c==6)
        {
            printf("#");
        }
        else printf(" ");
        
        }
        printf("\n");
    }
    
}