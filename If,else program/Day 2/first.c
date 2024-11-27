// Write C program that takes an hour in the 24-hour fromat as input and identifies the time of day as "Morning","afternoon"
//  "evening" or night. implement this using a series of if statements ensure that the program also check for invalid input
// displaying an appropriate message if the enter hour is not within the valid range(0-23)
#include <stdio.h>
#include<conio.h>
int main()
{
    int time;
    printf("Enter time");
    scanf("%d", &time);
    if (time < 0 && time > 3)
        printf("good night");
    else if (time > 3 && time < 12)
        printf("good morning");
    else if (time > 12 && time <= 15)
        printf("Good AfterNoon");
    else if (time > 15 && time < 20)
        printf("Good Evening");
    else if (time >= 20 && time <= 24)
        printf("Good Night");
    else
        printf("Unknown time!");
    getch();
    return 0;
}