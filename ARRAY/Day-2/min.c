/*write a C program to find the minimum and maximum element of a given array*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,j,max,min;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter %d element ",n);
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
            }
max=min=a[0];
for ( i =1; i <n; i++)
{
    
    if (max<a[i])max=a[i];
    
    if(min>a[i])min=a[i];
} 
    printf("max=%d, min=%d",max,min);

            
    
}