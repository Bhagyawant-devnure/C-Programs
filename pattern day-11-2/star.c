/*Write a C program to print given pattern.

*  *  *  *  *
   *  *  *  *
      *  *  *
         *  *
            *
*/



#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    for (int r = 1; r <=n; r++)
    {
        for (int c= 1; c <=n; c++)
        {
            if(c>=r)
            {
                printf("%3c",'*');
            }
            else printf("%3c",' ');
            
        }
        printf("\n");
    }
    return 0;
}