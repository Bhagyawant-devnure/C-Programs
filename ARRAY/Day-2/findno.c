/*Write a C program to search for a given element in an array and print its index. The program should prompt
the user to input the element they want to search for
if the element is found in the array, the program will print the index of the element
if the element is not found the program will display a message indicating that the element is not present in the array*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], n, i, ele, f = 1;
    printf("enter array size");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        puts("enter array 1-100 between");

    else
    {
        printf("enter %d element", n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 0; i < n; i++)
            printf(" element at index [%d] %d\n", i, a[i]);
    }
    printf("enter finding element");
    scanf("%d", &ele);

    for (i = 0; i < n; i++)
    {

        if (a[i] == ele)

            printf("element %d found at index  %d cell\n", ele, i + 1, f = 1);
    }
    if (a[i] == 0)
    {
        printf("element not found");
    }
}

/*#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100], n, i, ele, f = 1;
    printf("enter array size");
    scanf("%d", &n);
    printf("enter %d element", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter search element");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            printf("%d in %d cell ", ele, i + 1, f = 1);
        }
        if (f == 0)
        {
            printf("%d is not found", ele);
        }
        getch();
    }
}*/
