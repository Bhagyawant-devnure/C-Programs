//Write a C program to input any charcter and check whether it is alphabate,digit or special character
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter your character");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        printf("It is Alphabate");
    }
    else if(ch>='0' && ch<='9'){
    printf("it is Digit");}
    else {
        printf("it is specal character");
    }
    
}