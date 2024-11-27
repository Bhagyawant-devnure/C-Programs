#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter your character ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z') ch=ch-32;
    else if(ch>='A' && ch<='Z') ch=ch+32;
    printf("char=%c",ch);
    getch();
}