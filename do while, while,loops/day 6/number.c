/*using While loop write a c program that reads two integers,N1 N2 from the user the program should print all the 
the nubers from N1 N2 in single line, separated by commas.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2;
    printf("enter your no");
    scanf("%d",&n1);
    printf("enter your no");
    scanf("%d",&n2);
    while (n1<=n2)
    {

    printf(" %2d",n1);
    if(n1<n2){
        printf(",");
    }
    n1++;
    
    getch();
    }
    
}
