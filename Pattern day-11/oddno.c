/*Write C program to print given pattern.

1
3  5
5  7   9
7  9   11  13
9  11  13  15  17
*/





#include <stdio.h>
#include <conio.h>
int main()
{
    int n,l=1,k=1;
    printf("enter n value");
    scanf("%d", &n);
    for (int i= l; i <= n; i++)
    {
        k=l;
        for (int j= 1;j<=i;j++)
        {
            printf("%3d", k);
            k+=2;

        }
        l+=2;
        printf("\n");
    }

    return 0;
}