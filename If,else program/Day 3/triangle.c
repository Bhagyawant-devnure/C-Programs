//Write a C program to check whether the triangle is equilateral,isosceles or scalene triangle.
/*Validity Check
if all three side are equal then the triangle is equilateral.
if excatlly two side are equal then the triangle is isosceles.
if all sides are different then the triangle is scalene.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    puts("Enter value a b c");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("it is equilateral");
    }
    else if(a==b || b==c || c==a)
{
printf("it is isoosceles");
}
else{
 printf("it is scalene");
}
}
