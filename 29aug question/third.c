//write c program to check and print that given number is even or odd without using ternary opearator and control statement
#include<stdio.h>
int main(){
    int a=13;
    (a%10==0) && printf("Even Number") || printf("Odd Number");
}