//Write a C program to do a arithmetic operation on two number by using switch Case
//Take the operators(+,-,*,/) as cases and take the input from the user that what kind of operation user want to do on two number.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("enter num1 num2",num1,num2);
    scanf("%d %d ",&num1,&num2);
    int op;
    printf("enter your choice");
    scanf("%d",&op);
    switch (op)
    {
    case 1 :
    printf("Addition of %d and %d:%d ",num1,num2,num1+num2);
    break;
    
    case 2 :
    printf("Subtraction of %d and %d:%d ",num1,num2,num1-num2);
    break;
    
    case 3 :
    printf("Multiplication of %d and %d:%d ",num1,num2,num1*num2);
    break;


    case 4:
    printf("Division of %d and %d:%d ",num1,num2,num1/num2);
    break;


    
    default:puts("Not Found");
    }
}