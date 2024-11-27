/*write a c program to seprate  odd even integers into seprate arrays*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], n, i, even, odd;
    printf("enter array size");
    scanf("%d", &n);
    printf("enter %d element", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("even numbers are\n"); 
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            if (a[i]%2 == 0)
            {
                printf("%d\n", a[i]);
            }
        }
    }
    printf("odd numbers are\n");
    for ( i = 0; i <n; i++)
    {
        if (a[i>=0])
        {
            if (a[i]%2==1)
            {
                printf("%d\n",a[i]);
            }
            
        }
        
    }
    
}