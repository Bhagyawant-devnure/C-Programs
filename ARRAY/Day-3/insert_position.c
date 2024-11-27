/*write a c program to insert an element at a given position in an array*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], n, ele, pos, i;
    printf("enter array size");
    scanf("%d", &n);
    printf("enter element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to be elment : ");
    scanf("%d", &ele);
    printf("enter position: ");
    scanf("%d", &pos);
    if ((pos - 1) == n){
        a[n] = ele;
}
else
{
    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = ele;
}
printf("element are : ");
for (i = 0; i <= n; i++)
{
    printf("%d", a[i]);
}
return 0;
}