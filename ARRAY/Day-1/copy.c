
/*write a program in c to copy the element of one array into another array.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],d[100],n,i;
    printf("enter array size");
    scanf("%d",&n);
    if (n<1|| n>100)
    puts("enter element 1-100 only");
    else
    {
        printf("enter %d element",n);
        for(i=0;i<n;i++)
        
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <n; i++)
    {

        d[i]=a[i];
        printf("index [%d] [%d] %d %d\n",i,i,d[i],a[i]);
    }
    
    
    
    
    
}