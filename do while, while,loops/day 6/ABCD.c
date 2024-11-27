/*Write a C program print A to Z alphabate using while loop*/
#include <stdio.h>
int main()
{
    int choice;
    printf("menu\n");
    printf("1. Print small letter a to z\n");
    printf("1. Print small letter z to a\n");
    printf("3. Print capital letter A to Z\n");
    printf("4. print capitl letter Z to A\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        char ch = 'a';
        while (ch <= 'z')
        {
            printf("%2c", ch);
            ch++;
        }
        printf("\n");
        break;
    }
    case 2:
    {
        char ch = 'z';
        while (ch >= 'a')
        {
            printf("%2c", ch);
            ch--;
        }
        printf("\n");
        break;
    }
    case 3:
    {
        char ch = 'A';
        while (ch <= 'Z')
        {
            printf("%2c", ch);
            ch++;
        }
        printf("\n");
        break;
    }
    case 4:
    {
        char ch = 'Z';
        while (ch >= 'A')
        {
            printf("%2c", ch);
            ch--;
        }
        printf("\n");
        break;
    }

    default:printf("invalide choice please select 1 to 4");
        break;
    }
}