
#include <stdio.h>
int main()
{
    int a[100], n, j, i, t;
    printf("enteer array size");
    scanf("%d", &n);
    printf("enter  %d element \n ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i] + a[j]==6)
            
               printf("\nparir found (%d %d)",a[i] ,a[j]);
            
        }}}

