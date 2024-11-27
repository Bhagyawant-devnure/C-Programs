//write a C program to read one character from user and convert it into upear case if given character is in lowercase
//otherwise convert into lowercase using simple (if) only
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter charachter");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("CH :%c",ch+32);
    
}