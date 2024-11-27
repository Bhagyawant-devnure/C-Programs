/*Write a C program to print all characters from captial A to small Z along with their ASCII values using a while loop*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch ='A';
    while (ch <='Z')
    {
        printf("charcter: %c, ASCII value: %d\n ",ch,(int )ch);
        ch++;
    }
    
}