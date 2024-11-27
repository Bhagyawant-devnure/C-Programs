/*write a c program to store first nth prime number into array and print the result array*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[100], n, i, a = 0, j;
    printf("enter the nth term: ");
    scanf("%d", &n);
    for (i = 2; a <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if ((j * j) > i)
            arr[a++] = i;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
