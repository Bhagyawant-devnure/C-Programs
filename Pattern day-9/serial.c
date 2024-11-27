//write c program  to print given pattern   1 2 3 4
                                        /*  2 4 6 8
                                            3 6 9 12*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,t;
    printf("enter a n value");
    scanf("%d",&n);
    t=1;
    while (t<=n)
    {
        i=1;
    
    do
    {
        printf("%4d",t*i);
        i++;
    } while (i<=10);
    printf("\n");
    t++;
    
}
getch();
}


