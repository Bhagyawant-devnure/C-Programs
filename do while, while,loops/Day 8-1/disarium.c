/*(Using For Loop) write c program to check given number is disarium number or not*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num, orignalnum, sum = 0, digit, position = 1;
    printf("enter a number: ");
    scanf("%d",&num);
    orignalnum = num;
    //calculate the sum of digit powered with their respective positions
    while (num > 0)
    {
        digit = num % 10;
        sum += (int)pow(digit,position);
        num/=10;
        position++;
    } 
    // check if the sum is equal to the orignal number
    if (sum == orignalnum)
    {
        printf("%d is a disarium number\n",orignalnum);

    }
    else{
        printf("%d is not a disarium number\n",orignalnum);
    }
    return 0;

}
