/*write a c program that reads an integer from the user and prints multiple*/
#include<stdio.h>
#include<conio.h>
int main(){
    int i=1;
    int no;
    printf("enter a no");
    scanf("%d",&no);
    while (i<=10)
    {
        printf("%d * %d= %d\n",no,i,(no*i));
        i++;
    }
    return 0;
}