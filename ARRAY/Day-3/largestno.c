/*write a c program to find the second largest element in an array*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], n, i, j = 0, lrg, lrg2nd;
    printf("enter array size", n);
    scanf("%d", &n);
    printf("enter %d element in the array", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d\n", i);
        scanf("%d", &a[i]);
    }
    lrg = 0;
    for (i = 0; i < n; i++)
    {
        if (lrg < a[i])
        {
            lrg = a[i];
            j = i;
        }
    }
    lrg2nd = 0;
    for (i = 0; i < n; i++)
    {
        if (i == j)
        {
            i++;
            i--;
        }
        else
        {
            if (lrg2nd < a[i])
            {
                lrg2nd = a[i];
            }
        }
    }

    printf("the second largest element in the array is : %d\n\n", lrg2nd);
}