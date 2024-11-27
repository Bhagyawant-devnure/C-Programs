/*
1
1 2
1   3
1     4
1 2 3 4 5

*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int r, c, n;
    printf("enter n value");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {

        for (c = 1; c <= r; c++)
        {
            if (r==c || c==1 || r==n)

                printf(" %d ",c);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}

