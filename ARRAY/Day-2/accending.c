/*the program should use the bubble sort algorithm to compare adjacent elements and swap them if they arein the wrong order
after sorting the program should print the orignal array and the sortedd array.*/
#include <stdio.h>
#include <conio.h>
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
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("sorted element are");

    for (i = 0; i < n; i++){
        

    printf("%3d", a[i]);
    }
    return 0;
}
