#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,t;
    printf("enter array size",n);
    scanf("%d",&n);
    printf("enter %d element ",n);
    for ( i = 0; i < n; i++)
    {
        /*printf("reverse order");*/
        scanf("%d",&a[i]);

    }
    for ( i = 0; i <n/2; i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    for ( i = 0; i <n; i++)
    {
        printf("%2d",a[i]);
    }
    
    
}