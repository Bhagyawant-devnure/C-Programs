// Write a C program to input marks of five subject Physics, chemistry,biology,mathematics and computer
// calculate percentage and grade
#include <stdio.h>
#include <conio.h>
int main()
{
    float per;
    int phy, che, bio, math, com, totalmark, grade;
    printf("enter your mark", phy, che, bio, math, com);
    scanf("%d %d %d %d %d", &phy, &che, &bio, &math, &com);
    totalmark = phy + che + bio + math + com;
    printf("%d total mark\n", totalmark);
    per = totalmark / 5.0;
    printf("percentage = %.2f",per);
    if (per >= 90)
    {
        printf("Grade A");
    }
    else if ("per>=80")
    {
        printf("Grade B");
    }
    else if (per >= 70)
    {
        printf("Grade C");
    }
    else if (per >= 60)
    {
        printf("Grade D");
    }
    else if (per >= 40)
        
    {
        printf("Grade E");
    }
    else if (per < 35)
    {
        printf("Fail");
    }
}