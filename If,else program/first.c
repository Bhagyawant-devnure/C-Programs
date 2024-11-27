//Write a c program to read name and age of person and by age check the person is eligible for vote or not using simple if only


#include<stdio.h>
#include<conio.h>
int main()
{
    char name[100];
    printf("enter your name");
    scanf("%s",&name);
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>18){
     printf(" %s hi you are eligible for vote",name);
     }
     else{
     printf("%s  hi you are not eligible for vote",name);}
     getch();
    



}