//write c program to find previous multiple of 10 of given number only


#include<stdio.h>


int main()
{
    int a=26;
    a%10<=10 && printf("previous multiple %d",a/10*10);
    return 0;
    
}