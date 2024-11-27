// write a c program to take user Id as 1001 and password as 1010. as the user to enter his id, if the id is valid
/* then ask user to enter his password, if the password is correct then print the name of the useer, otherwise
the program will print incorrect password and if the id doesnot exits, the program will print incorrect id*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int uid=1001;
    int upass=1010;
    char uname [20];
    printf("enter your name");
    scanf("%s",&uname);
    printf("enter your id");
    scanf("%d",&uid);
    switch (uid)
    {
    case 1001:printf("enter your password");
    scanf("%d",&upass);
    if(upass==1010)
    {
      printf("user %d\n",uid);
      printf("name: %s",uname);
    } else{
      printf("incorrecct password");
    }
   break;
   default:printf("id doesnot exits");
   break;
    }
    
    }