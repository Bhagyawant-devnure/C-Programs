// write a c program that takes a month number (1-12) as input from the user and prints the number of days in
// that month using a switch statement

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, mValue;
    printf("Enter Month no between 1-12 : ");
    scanf("%d", &n);

    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
    {
        mValue = 31;
    }
    else if (n == 2)
    {
        mValue = 28;
    }
    else if (n == 4 || n == 6 || n == 9 || n == 11)
    {
        mValue = 30;
    }

    switch (mValue)
    {
    case 31:
    {
        printf("31 days");
        break;
    }

    case 30:
    {
        printf("30 days");
        break;
    }

    case 28:
    {
        printf("28/29 days");
        break;
    }
    default:
        printf("invalid Month");
        break;
    }
}
    //     if(n==1||n==3||n==5||n==7||n==8||n==10||n==12){
    //         printf("31 days");
    //     }
    // else if(n==2){
    //     printf("28/29 days");

    // }
    // else if(n==4||n==6||n==9||n==11)
    // {
    //     printf("30 days");
    // }
    // else{
    //     printf("invalid month no");
    // }
    // }