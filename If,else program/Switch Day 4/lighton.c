// Write a C program that allows the user to control the state of light and air (AC) 
#include<stdio.h>
#include<conio.h>

void main()
{
    int no;
    start:
    printf("Enter your choice between 1-4");
    scanf("%d",&no);
    switch (no)
    {
    case 1:printf( "Turn On the Light\n");break;
    case 2:printf("Turn Off the Light\n");break;
    case 3:printf("Turn On the AC\n");break;
    case 4:printf("Turn Off the AC\n");break;
    default:printf("Invalid Choice ! Please enter 1,2,3 or 4\n");break;
    
        }
        goto start;
}
