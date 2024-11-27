//Dynamically allocate memory for an array to store to integer values. separte print allthe elements that are located at
//even indices and odd indices of the array.
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i;
    printf("enter array size",n);
    scanf("%d",&n);
    
    for ( i = 0; i < n; i++){
        printf("enter %d element\t",n);
          scanf("%d",&a[i]);
    }
for ( i = 0; i<n; i++)
{
    if (a[i]%2==0)
    {
        printf("this is even element [%d] %d\n",i,a[i]);
    }
    else printf("this is odd element [%d] %d\n",i,a[i]);
    
}
    return 0;
    }*/

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
    
    

   
    if (a[i]%2==0)
    {
        printf("this is even element [%d] %d\n",i,a[i]);
    }
    else printf("this is odd element [%d] %d\n",i,a[i]);
    
}}
    
    
   
    
     

    
    