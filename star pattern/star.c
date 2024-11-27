#include<stdio.h>

int main()
{
    int r,c,nr;
    printf("enter row ");
    scanf("%d",&nr);
    for(r=1;r<=nr;r++)
    {
    for(c=1;c<=nr;c++){
    
    if(r==3|| c==4){
        printf(" #");

    }
    else printf(" ");
    }
    printf("\n");
    }
    

}