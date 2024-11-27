// write a c program that will ask for a perosn name and his/her game score. then it will ask for a second
/* persona's name and score.
the program wil print the winner's name and also print by how many
points that person won by comparing the scores. develop this program by using switch case*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int difference;
    int score1, score2, win = 100;
    char uperson1[20], uperson2[20];

    printf("enter your name", uperson1, uperson2);
    scanf("%s %s", &uperson1, &uperson2);
    printf("enter your score");
    scanf("%d %d", &score1, &score2);
    if (score1 > score2)
    {
        difference = score1 - score2;
        win = 0;
    }
    else if(score2>score1)
    {
        difference = score2 - score1;
        win = 1;
    }

    switch (win)
    {
    case 0:
    {
        printf("%s is win by %d", uperson1, difference);
        break;
    }
    case 1:
    {
        printf("%s is win by %d", uperson2, difference);
        break;
    }

    default:
    {
        printf("both are equal");
        break;
    }
    }
}
