// Write  a C program to accept id from user and display department
#include<stdio.h>
int main()
{
    int id;
    char roll;
    puts("Enter your Id no");
    scanf("%d",&id);

    if(id>10 && id<16){
      roll = 's';
    }
    if(id>15 && 21>id){
      roll = 'd';
    }
    
    switch (roll)
    {
    case 's':
    {
      puts("software department");
      break;
    }
      case 'd':
      {
      puts("developer department");
      break;
      }
    default: printf ("invalid");
    }
}