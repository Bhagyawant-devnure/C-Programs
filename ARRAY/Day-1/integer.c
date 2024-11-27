/*read*/
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n;
    printf("enter arry size");
    scanf("%d",&n);
    
    for ( int i = 0; i <n; i++)
    {
    
    printf("enter the element %d [ ]",i);
    scanf("%d",&a[i]);
        
    }
    for (int i = 0; i <n; i++)
    {
        printf("the element atn[%d] %d\n", i,a[ i]);
    }
    return 0;
    
    
}*/
// Read an integer value from the user to determine the size of array dynamically allocate memory for the array based given size

#include<stdio.h>

int main()
{
    int a[100],n,i;
    printf("enter arry size");
    scanf("%d",&n);
if(n<1 || n>100 )
puts("array size 1-100 only");
else
{
    printf("enter %d element",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    printf(" element at index [%d] %d\n",i,a[i]);
    
}
    
    
    
}