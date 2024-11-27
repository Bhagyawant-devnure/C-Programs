/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter your no");
    scanf("%d",&n);
    while (n>=1)
    {
        printf("%d",n--);
    }
    
}*/
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter your no2");
    scanf("%d",&n2);
    printf("enter your no1");
    scanf("%d",&n1);
    while (n2>=n1)
    {
        printf("%3d",n2--);
    }
    
}